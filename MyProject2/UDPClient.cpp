//#include<iostream>
//#pragma comment(lib,"ws2_32.lib")
//#include<WinSock2.h>
//#include <Ws2tcpip.h>
//using namespace std;
//int main() {
//	WSADATA wsaData;
//	SOCKET cliSocket;
//	WSAStartup(MAKEWORD(2,2),&wsaData);
//	cliSocket = socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);
//	sockaddr_in cliAddr;
//	cliAddr.sin_family = AF_INET;
//	cliAddr.sin_port = htons(8800);
//	/*cliAddr.sin_addr.s_addr = inet_addr("127.0.0.1");*/
//	inet_pton(AF_INET, "127.0.0.1", &cliAddr.sin_addr.s_addr);
//	cout << "��ʼ��������......" << endl;
//	char buf[64] = "hello world!";
//	sendto(cliSocket,buf,64,0,(SOCKADDR*)&cliAddr,sizeof(cliAddr));
//	cout << "������ϣ�" << endl;
//	closesocket(cliSocket);
//	WSACleanup();
//	system("pause");
//	return 0;
//}