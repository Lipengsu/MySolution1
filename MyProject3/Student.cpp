#include"Student.h"
#include<stdio.h>
#include<iostream>
#include<cstring>
#include<Windows.h>
#include<mysql.h>
using namespace std;
void Student::insertInfo() {
	MYSQL mysql;
	mysql_init(&mysql);
	if (mysql_real_connect(&mysql, host, user, password, db_name, port, "NULL", 0) != NULL) {
		char str[100];
		char TableName[100];
		cout << "请输入需要操作的表名" << endl;
		cin >> TableName;
		cout << "请输入班级号：" << endl;
		cin >> classid;
		cout << "请输入学号：" << endl;
		cin >> id;
		cout << "请输入姓名：" << endl;
		cin >> name;
		cout << "请输入年龄：" << endl;
		cin >> age;
		sprintf_s(str, "insert into %s values ('%d','%d','%s','%d')", TableName, classid, id, name, age);
		mysql_query(&mysql, "SET NAMES GBK");
		if (mysql_real_query(&mysql, str, (unsigned int)strlen(str)) == 0)
			cout << "insert successfully!";
		else
			cout << "insert failed!";
	}
	else
		cout << "connect failed!" << endl;
	mysql_close(&mysql);
}
void Student::delectInfo() {
	MYSQL mysql;
	mysql_init(&mysql);
	if (mysql_real_connect(&mysql, host, user, password, db_name, port, NULL, 0) != NULL) {
		char str[100];
		char TableName[100];
		cout << "请输入要操作的表名：" << endl;
		cin >> TableName;
		cout << "请输入要操作的学号：" << endl;
		cin >> id;
		mysql_query(&mysql, "SET NAMES GBK");
		sprintf_s(str, "delete from %s where id =%d", TableName, id);
		if (mysql_real_query(&mysql, str, (unsigned int)strlen(str)) == 0)
			cout << "delete successfully!" << endl;
		else
			cout << "delete failed!" << endl;
	}
	else
		cout << "connect failed!" << endl;
	mysql_close(&mysql);
}
void Student::selectInfo() {
	MYSQL mysql;
	mysql_init(&mysql);
	MYSQL_RES* result;
	MYSQL_ROW sql_row;
	if (mysql_real_connect(&mysql, host, user, password, db_name, port, NULL, 0) != NULL) {
		char str[100];
		char TableName[100];
		cout << "请输入要操作的表名：" << endl;
		cin >> TableName;
		cout << "请输入要操作的班级号或学号：" << endl;
		cin >> id;
		mysql_query(&mysql, "SET NAMES GBK");
		sprintf_s(str, "select * from  %s where(id =%d or classid =%d)",TableName, id, id);
		if (mysql_real_query(&mysql, str, (unsigned int)strlen(str)) == 0) {
			result = mysql_store_result(&mysql);
			if (result) {
				while (sql_row = mysql_fetch_row(result)) {
					cout << "CLARRID:" << sql_row[0] << endl;
					cout << "	ID:" << sql_row[1] << endl;
					cout << " NAME:" << sql_row[2] << endl;
					cout << "   AGE:" << sql_row[3] << endl;
				}
			}
		}
		else
			cout << "select failed!" << endl;
	}
	else
		cout << "connect failed!" << endl;
	mysql_close(&mysql);
}
void Student::updateInfo() {
	MYSQL mysql;
	mysql_init(&mysql);
	if (mysql_real_connect(&mysql, host, user, password, db_name, port, NULL, 0) != NULL) {
		char str[100];
		char TableName[100];
		cout << "请输入要操作的表名：" << endl;
		cin >> TableName;
		cout << "请输入要操作的学号：" << endl;
		cin >> id;
		cout << "请输入修改后的姓名：" << endl;
		cin >> name;
		cout << "请输入修改后的年龄：" << endl;
		cin >> age;
		mysql_query(&mysql, "SET NAMES GBK");
		sprintf_s(str, "update %s set name ='%s',age =%d where id = %d", TableName, name, age,id);
		if (mysql_real_query(&mysql, str, (unsigned int)strlen(str)) == 0)
			cout << "update successfully!" << endl;
		else
			cout << "uodate failed!" << endl;
	}
	else
		cout << "connect failed!" << endl;
	mysql_close(&mysql);
}