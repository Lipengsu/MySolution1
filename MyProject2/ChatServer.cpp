//���ݰ��׽��ֱ�д�������
#include<iostream>
using namespace std;
#include<cstring>
#include"WinSock2.h"
#include <Ws2tcpip.h>
#pragma comment(lib,"ws2_32.lib")
const int port = 7700;
const int BUF_SIZE = 64;
int main() {
	WSADATA wsaData;
	SOCKET serSock;
	sockaddr_in serAddr;
	char buf[BUF_SIZE];
	int senderaddsize = sizeof(serAddr);
	int retValue;
	//��ʼ��WinSock
	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
		cout << "WSAStartup failed!" << endl;
		return -1;
	}
	//����UDP Socket
	serSock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
	if (serSock == INVALID_SOCKET) {
		cout << "socket failed" << endl;
		WSACleanup();
		return -1;
	}
	//���÷�����Socket��ַ
	serAddr.sin_family = AF_INET;//��ַ����
	serAddr.sin_port = htons(port);//�˿�
	serAddr.sin_addr.s_addr = htonl(INADDR_ANY);//��ַ
	retValue = bind(serSock, (SOCKADDR*)&serAddr, sizeof(serAddr));
	if (retValue == SOCKET_ERROR) {
		cout << "bind failed" << endl;
		closesocket(serSock);//�ر��׽���
		WSACleanup();//�ͷ��׽�����Դ
		return -1;
	}
	cout << "*************Mr.Zhang************" << endl;
	retValue = recvfrom(serSock, buf, BUF_SIZE, 0, (SOCKADDR*)&serAddr, &senderaddsize);
	if (retValue == SOCKET_ERROR) {
		cout << "receive failed!" << endl;
		closesocket(serSock);
		WSACleanup();
		return -1;
	}
	cout << "           Mr.Zhang:" << buf << endl;
	while (strcmp(buf, "bye") != 0) {
		cin >> buf;
		retValue = sendto(serSock, buf, 64, 0, (SOCKADDR*)&serAddr, senderaddsize);
		if (retValue == SOCKET_ERROR) {
			cout << "send failed!" << endl;
			closesocket(serSock);
			WSACleanup();
			return -1;
		}
		retValue = recvfrom(serSock, buf, BUF_SIZE, 0, (SOCKADDR*)&serAddr, &senderaddsize);
		if (retValue == SOCKET_ERROR) {
			cout << "receive failed" << endl;
			closesocket(serSock);
			WSACleanup();
			return -1;
		}
		cout << "        Mr.Zhang:" << buf << endl;
	}
	//�ر�socket,������������
	closesocket(serSock);
	//�ͷ���Դ���˳�
	WSACleanup();
	system("pause");
	return 0;
}