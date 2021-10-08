#include<iostream>
#include<stdio.h>
#include<Windows.h>
#include<mysql.h>
#include"Student.h"
using namespace std;

void creatTable();
void delectTable();
const char* user = "root";
const char* password = "123456";
const char* db_name = "java_sql";
const char* host = "127.0.0.1";
unsigned int port = 3306;
int main() {
	int select = 0;
	Student stu;
	do {
		cout << "\n\t\t============================" << endl;
		cout << "\t\t*\t1 ����ѧ����Ϣ�� \t *" << endl;
		cout << "\t\t*\t2 ����ѧ����Ϣ \t\t *" << endl;
		cout << "\t\t*\t3 ɾ��ѧ����Ϣ \t\t *" << endl;
		cout << "\t\t*\t4 ��ѯѧ����Ϣ \t\t *" << endl;
		cout << "\t\t*\t5 �޸�ѧ����Ϣ \t\t *" << endl;
		cout << "\t\t*\t6 ɾ��ѧ����Ϣ�� \t *" << endl;
		cout << "\t\t*\t0 �˳�ϵͳ \t\t *" << endl;
		cout << "\n\t\t============================" << endl;
		cout << "����������ѡ��" << endl;
		cin >> select;
		switch (select)
		{
		case 1:
			creatTable();
			break;
		case 2:
			stu.insertInfo();
			break;
		case 3:
			stu.delectInfo();
			break;
		case 4:
			stu.selectInfo();
			break;
		case 5:
			stu.updateInfo();
			break;
		case 6:
			delectTable();
			break;
		}
	} while (select != 0);
	return 0;
}
void creatTable() {
	MYSQL mysql;
	mysql_init(&mysql);
	if (mysql_real_connect(&mysql, host, user, password, db_name, port, NULL, 0) != NULL) {
		char str[100];
		char TableName[100];
		cout << "�����������" << endl;
		cin >> TableName;
		mysql_query(&mysql, "SET NAMES GBK");
		sprintf_s(str, "create table %s(classid int,id int,name char(20),age int)", TableName);
		if (mysql_real_query(&mysql, str, (unsigned int)strlen(str)) == 0)
			cout << "create table successfully!";
		else
			cout << "create table failed!";
	}
	else
		cout << "connect failed!" << endl;
	mysql_close(&mysql);
}
void delectTable()
{
	MYSQL mysql;
	mysql_init(&mysql);
	if (mysql_real_connect(&mysql, host, user, password, db_name, port, NULL, 0) != NULL) {
		char str[100];
		char TableName[100];
		cout << "������Ҫɾ���ı�����" << endl;
		cin >> TableName;
		sprintf_s(str,"drop table if exists %s",TableName);
		mysql_query(&mysql, "SET NAMES GBK");
		if (mysql_real_query(&mysql, str, (unsigned int)strlen(str)) == 0)
			cout << "delete table successfully!";
		else
			cout << "delete table failed!";
	}
	else
		cout << "connect failed!" << endl;
	mysql_close(&mysql);
}