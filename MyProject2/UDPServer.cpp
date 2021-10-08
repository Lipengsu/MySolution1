//#include<iostream>
//using namespace std;
//#include<WinSock2.h>
//#pragma comment(lib,"ws2_32.lib")
//int main()
//{
//	WSADATA wsaData;
//	SOCKET serSocket;
//	WSAStartup(MAKEWORD(2,2),&wsaData);
//	serSocket = socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);
//	sockaddr_in serAddr;
//	serAddr.sin_family = AF_INET;
//	serAddr.sin_port = htons(8800);
//	serAddr.sin_addr.s_addr = htonl(INADDR_ANY);
//	bind(serSocket,(SOCKADDR*)&serAddr,sizeof(serAddr));
//	cout << "等待数据传输......" << endl;
//	char buf[64];
//	int senderaddrsize = sizeof(serAddr);
//	recvfrom(serSocket,buf,64,0,(SOCKADDR*)&serAddr,&senderaddrsize);
//	cout << "接受完成！" << endl;
//	cout << "Client:" << buf << endl;
//	closesocket(serSocket);
//	WSACleanup();
//	system("pause");
//	return 0;
//}