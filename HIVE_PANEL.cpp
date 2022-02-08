#include <iostream>
#include <windows.h>

//BRO PLAY ROD WAVE WHILE USING THIS AMZING TOOL

using namespace std;

string methods = "                    ╔═══════════════════════════════╗\n"
			     "                    ║      ╔╦╗╔═╗╔╦╗╦ ╦╔═╗╔╦╗╔═╗    ║\n"
			     "                    ║      ║║║║╣  ║ ╠═╣║ ║ ║║╚═╗    ║\n"
			     "                    ║      ╩ ╩╚═╝ ╩ ╩ ╩╚═╝═╩╝╚═╝    ║\n"
			     "╔════════════╦══════╩═══════════════════════════════╩══════╦════════════╗\n"
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
				 			 

string helpMenu = "╔══════════════════════════════╗ \n"
				  "║  ╦ ╦╔═╗╦  ╔═╗  ╔╦╗╔═╗╔╗╔╦ ╦  ║\n"
				  "║  ╠═╣║╣ ║  ╠═╝  ║║║║╣ ║║║║ ║  ║\n"
				  "║  ╩ ╩╚═╝╩═╝╩    ╩ ╩╚═╝╝╚╝╚═╝  ║ \n"
				  "╩══════════════════════════════╩\n"
				  "╔════║══║════╗\n"
				  "║DISCORD     ║\n"
				  "║METHODS     ║\n"
				  "║EXIT        ║\n"
				  "╚════════════╝\n";


string methodsList = "UDP, TCP, ACK\n";

void udp_attack(){
	string ip = "IP: ";
	cout << ip;
	cin >> ip;
	//cout << ip << endl;
	
	string port_x = "PORT: ";
	cout << port_x;
	cin >> port_x;
	
	string time_x = "TIME: ";
	cout << time_x;
	cin >> time_x;
}

void x() {
	cout << methods;
	string cbv = "METHOD: ";
	cin >> cbv;
	//cout << cbv << endl;
	
	if (cbv == "UDP"){
		udp_attack();
	}
}

void b() {
	cout << "Choose A Option: ";
	string vxv;
	cin >> vxv;
	cout << vxv << endl;
	
	if (vxv == "METHODS"){
		system("cls");
		x();
	}
	
	if (vxv == "DISCORD"){
		system("cls");
		cout << "http://example.com/";
	}
}

void login() {
	string userName;
	string passWord;
	int token;
	cout<< "USERNAME: ";cin>>userName;
	cout<< "PASSWORD: ";cin>>passWord;
	cout<< "TOKEN: ";cin>>token;
	return;
}

void toolMenu(){
	SetConsoleOutputCP(CP_UTF8);
	setvbuf(stdout, nullptr, _IOFBF, 1024);
	string ban_one = u8"╔═╗═╗ ╦╔═╗╦  ╔═╗╦╔╦╗  ╔═╗╔═╗╔╦╗";
	string ban_two = u8"║╣ ╔╩╦╝╠═╝║  ║ ║║ ║   ║ ╦║ ║ ║║";
	string ban_three = u8"╚═╝╩ ╚═╩  ╩═╝╚═╝╩ ╩   ╚═╝╚═╝═╩╝";
	system("cls");
	cout << ban_one <<endl;
	cout << ban_two <<endl;
	cout << ban_three <<endl;
	
	cout << "╔═#\n";
	cout << "╚════HIVE=>: ";
	
	
	string xvx;
	cin >> xvx;
	cout << xvx << endl;
	
	if (xvx == "HELP"){
		system("cls");
		cout << helpMenu ;
		b();
	}
	
	if (xvx == "METHODS"){
		system("cls");
		cout << methodsList;
	}
	
	if (xvx == "CROSSHAIR"){
		system("cls");
		//starts crosshair.exe
		
	}
		
	return;
}

int main() {
	system("cls");
	SetConsoleOutputCP(CP_UTF8);
	setvbuf(stdout, nullptr, _IOFBF, 1024);
	string ban_one = u8"╔═╗═╗ ╦╔═╗╦  ╔═╗╦╔╦╗  ╔═╗╔═╗╔╦╗\n";
	string ban_two = u8"║╣ ╔╩╦╝╠═╝║  ║ ║║ ║   ║ ╦║ ║ ║║\n";
	string ban_three = u8"╚═╝╩ ╚═╩  ╩═╝╚═╝╩ ╩   ╚═╝╚═╝═╩╝\n";
	cout << ban_one; //banner
	cout << ban_two; //banner
	cout << ban_three; //banner
	Sleep(1000); //1 sec
	login();
	toolMenu();
	return 0;	
}



//#include <WS2tcpip.h>
//#pragma omment (lib, "ws2_32.lib")




mut ip := os.input("")
mut cport := os.input("")
mut timev := os.input("TIME: ")
mut methodx := os.input("METHOD: ")

ip = host
cport = port
timev = time
methodx = method

blah := http.get("http://api.php") + host + port + time + method
 
