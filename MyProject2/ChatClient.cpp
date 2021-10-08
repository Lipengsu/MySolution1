#include<iostream>
using namespace std;
#include<cstring>
#include<WinSock2.h>
#include <Ws2tcpip.h>
#pragma comment(lib,"ws2_32.lib")
const int port = 7700;//�˿ں�
const int BUF_SIZE = 64;
int main() {
	WSADATA wsaData;
	SOCKET cliSock;
	sockaddr_in cliAddr;
	char buf[BUF_SIZE];
	int senderaddsize = sizeof(cliAddr);
	int retValue;
	//��ʼ��WinSock
	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
		cout << "WSAStartup failed!" << endl;
		return -1;
	}
	//����UDPSocket
	cliSock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
	if (cliSock == INVALID_SOCKET) {
		cout << "socket failed!" << endl;
		WSACleanup();
		return -1;
	}
	//���ÿͻ���Socket��ַ
	cliAddr.sin_family = AF_INET;
	cliAddr.sin_port = htons(port);
	//cliAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	inet_pton(AF_INET, "127.0.0.1", &cliAddr.sin_addr.s_addr);
	cout << "*************Ms.Li*************" << endl;
	do {
		cin >> buf;
		retValue = sendto(cliSock,buf,64,0,(SOCKADDR*)&cliAddr,senderaddsize);
		if (retValue == SOCKET_ERROR) {
			cout << "send failed" << endl;
			closesocket(cliSock);
			WSACleanup();
			return -1;
		}
		retValue = recvfrom(cliSock, buf, BUF_SIZE, 0, (SOCKADDR*)&cliAddr, &senderaddsize);
		if (retValue == SOCKET_ERROR) {
			cout << "receive failed!" << endl;
			closesocket(cliSock);
			WSACleanup();
			return -1;
		}
		cout << "        Ms.Li:" <<buf<< endl;
	} while (strcmp(buf,"bye") != 0);
	//������ɣ��ر�Socket
	closesocket(cliSock);
	//�ͷ�DLL
	WSACleanup();
	system("pause");
	return 0;
}