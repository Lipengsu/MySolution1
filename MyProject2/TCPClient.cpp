//#include<iostream>
//using namespace std;
//#include<cstdlib>
//#include"WinSock2.h"
//#include <Ws2tcpip.h>
//#pragma comment(lib,"ws2_32.lib")
//int main() {
//	WSADATA wsaData;
//	SOCKET Clientsock;
//	sockaddr_in sockAddr;
//	WSAStartup(MAKEWORD(2, 2), &wsaData);
//	Clientsock = socket(PF_INET,SOCK_STREAM,IPPROTO_TCP);
//	sockAddr.sin_family = PF_INET;
//	inet_pton(AF_INET, "127.0.0.1", &sockAddr.sin_addr.s_addr);
//	sockAddr.sin_port = htons(2200);
//	connect(Clientsock,(SOCKADDR*)&sockAddr,sizeof(SOCKADDR));
//	char szBuffer[MAXBYTE] = { 0 };
//	recv(Clientsock, szBuffer, MAXBYTE, NULL);
//	cout << "Message from server:" << szBuffer << endl;
//	closesocket(Clientsock);
//	WSACleanup();
//	system("pause");
//	return 0;
//}