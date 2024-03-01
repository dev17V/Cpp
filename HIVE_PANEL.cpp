#include <iostream>
#include <windows.h>

using namespace std;

string methodsBanner =
    "╔═══════════════════════════════╗\n"
    "║      ╔╦╗╔═╗╔╦╗╦ ╦╔═╗╔╦╗╔═╗    ║\n"
    "║      ║║║║╣  ║ ╠═╣║ ║ ║║╚═╗    ║\n"
    "║      ╩ ╩╚═╝ ╩ ╩ ╩╚═╝═╩╝╚═╝    ║\n"
    "╔════════════╦════╩═════════════════╩══════╦════════════╗\n"
    "║  POSIDENS  ║xxxxxx║      TO ATTACK TYPE ATTACK    ║xxxxxx║   METHODS  ║\n"
    "║            ║xxxxx═╩═╦══════╦═════════════╦══════╦═╩═xxxxx║            ║\n"
    "║            ╚════════╝      ║ COMING SOON ║      ╚════════╝            ║\n"
    "║                            ║    0 API    ║                            ║\n"
    "║                            ║___Online____║                            ║\n"
    "║           UDP               _____________                             ║\n"
    "║ ONLY METHOD I GOT RN LOL   ║             ║                            ║\n"
    "║                            ║             ║                            ║\n"
    "║                            ║             ║                            ║\n"
    "║                            ║             ║                            ║\n"
    "║                            ║             ║                            ║\n"
    "╚════════════════════════════╝             ╚════════════════════════════╝\n";

string helpMenu =
    "╔══════════════════════════════╗ \n"
    "║  ╦ ╦╔═╗╦  ╔═╗  ╔╦╗╔═╗╔╗╔╦ ╦  ║\n"
    "║  ╠═╣║╣ ║  ╠═╝  ║║║║╣ ║║║║ ║  ║\n"
    "║  ╩ ╩╚═╝╩═╝╩    ╩ ╩╚═╝╝╚╝╚═╝  ║ \n"
    "╩════════════════════════════════════════╩\n"
"╔════║══║════╗\n"
"║DISCORD     ║\n"
"║METHODS     ║\n"
"║EXIT        ║\n"
"╚════════════╝\n";

string methodsList = "UDP, TCP, ACK\n";

void udpAttack() {
    string ip, port, time;
    cout << "IP: "; cin >> ip;
    cout << "PORT: "; cin >> port;
    cout << "TIME: "; cin >> time;
    // Implement UDP attack logic here
}

void selectMethod() {
    string method;
    cout << "METHOD: ";
    cin >> method;
    
    if (method == "UDP") {
        udpAttack();
    }
}

void displayToolMenu() {
    string userInput;
    while (true) {
        cout << methodsBanner;
        cout << "╔═#\n";
        cout << "╚════HIVE=>: ";
        
        cin >> userInput;
        cout << userInput << endl;
        
        if (userInput == "HELP") {
            system("cls");
            cout << helpMenu;
            selectMethod();
        } else if (userInput == "METHODS") {
            system("cls");
            cout << methodsList;
        } else if (userInput == "CROSSHAIR") {
            system("cls");
            // Starts crosshair.exe
        }
    }
}

void login() {
    string userName, passWord;
    int token;
    cout << "USERNAME: "; cin >> userName;
    cout << "PASSWORD: "; cin >> passWord;
    cout << "TOKEN: "; cin >> token;
    return;
}

int main() {
    system("cls");
    string bannerTop = "╔═╗═╗ ╦╔═╗╦  ╔═╗╦╔╦╗\n";
    string bannerMid = "║╣ ╔╩╦╝╠═╝║  ║ ║║ ║\n";
    string bannerBot = "╚═╝╩ ╚═╩  ╩═╝╚═╝╩ ╩\n";
    
    cout << bannerTop << bannerMid << bannerBot;
    Sleep(1000); // 1 sec
    login();
    displayToolMenu();
    return 0;
}
