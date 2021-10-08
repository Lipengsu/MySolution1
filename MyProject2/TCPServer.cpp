// MyProject2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include <iostream>
//#include <Ws2tcpip.h>
//using namespace std;
//#include"winsock2.h"
//#pragma comment(lib,"ws2_32.lib")
//int main()
//{
//    WSADATA wsaData;
//    SOCKET ServerSock;
//    SOCKET AccSock;
//    sockaddr_in sockAddr;
//
//    WSAStartup(MAKEWORD(2,2),&wsaData);
//
//    ServerSock = socket(PF_INET,SOCK_STREAM,IPPROTO_TCP);
//
//    sockAddr.sin_family = AF_INET;
//    //sockAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
//    inet_pton(AF_INET, "127.0.0.1", &sockAddr.sin_addr.s_addr);
//    sockAddr.sin_port = htons(2200);
//    bind(ServerSock, (SOCKADDR*)&sockAddr, sizeof(SOCKADDR));
//
//    listen(ServerSock,10);
//    SOCKADDR clntAddr;
//    int nSize = sizeof(SOCKADDR);
//    AccSock = accept(ServerSock, (SOCKADDR*)&clntAddr, &nSize);
//
//    const char *str="Server sends!";
//    send(AccSock, str, strlen(str) + sizeof(char), NULL);
//    closesocket(AccSock);
//    closesocket(ServerSock);
//
//    WSACleanup();
//    system("pause");
//    return 0;
//}
