//数据包套接字编写聊天程序
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
	//初始化WinSock
	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
		cout << "WSAStartup failed!" << endl;
		return -1;
	}
	//创建UDP Socket
	serSock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
	if (serSock == INVALID_SOCKET) {
		cout << "socket failed" << endl;
		WSACleanup();
		return -1;
	}
	//设置服务器Socket地址
	serAddr.sin_family = AF_INET;//地址家族
	serAddr.sin_port = htons(port);//端口
	serAddr.sin_addr.s_addr = htonl(INADDR_ANY);//地址
	retValue = bind(serSock, (SOCKADDR*)&serAddr, sizeof(serAddr));
	if (retValue == SOCKET_ERROR) {
		cout << "bind failed" << endl;
		closesocket(serSock);//关闭套接字
		WSACleanup();//释放套接字资源
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
	//关闭socket,结束接收数据
	closesocket(serSock);
	//释放资源并退出
	WSACleanup();
	system("pause");
	return 0;
}