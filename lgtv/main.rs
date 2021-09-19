use lg_webos_client::client::{WebOsClientConfig, WebosClient};
use lg_webos_client::command::Command as ClientCmd;
use structopt::StructOpt;

#[derive(StructOpt)]
struct Lgtv {
    #[structopt(short = "u", long, env)]
    url: String,
    #[structopt(short = "k", long, env)]
    key: String,
    #[structopt(subcommand)]
    cmd: Cmd,
}

#[derive(StructOpt)]
enum Cmd {
    SetInput { name: String },
    SetBacklight { percent: i8 },
}

#[tokio::main]
async fn main() {
    let lgtv = Lgtv::from_args();

    let cfg = WebOsClientConfig::new(&lgtv.url, &lgtv.key);
    let client = async { WebosClient::new(cfg).await.expect("client") };

    match lgtv.cmd {
        Cmd::SetInput { name } => {
            client.await.send_command(ClientCmd::SetInput(name)).await.expect("SetInput");
        }
        Cmd::SetBacklight { percent } => {
            let mut client = client.await;
            let cmd = ClientCmd::CreateAlertSetBacklight(percent);
            let resp = client.send_command(cmd).await.expect("CreateAlertSetBacklight");
            let alert_id = resp.payload.expect("payload")["alertId"].as_str().expect("alertId").to_owned();
            client.send_command(ClientCmd::CloseAlert(alert_id)).await.expect("CloseAlert");
        }
    }
}
