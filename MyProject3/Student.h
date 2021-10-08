#pragma once
#ifndef STDUDENT_H_INCLUDED
#define STDUDENT_H_INNCLUDED
#include<iostream>
using namespace std;
class Student {
public:
	int classid;
	int id;
	char name[20];
	int age;
	const char* user = "root";
	const char* password = "123456";
	const char* db_name = "java_sql";
	const char* host = "127.0.0.1";
	unsigned int port = 3306;
	void insertInfo();
	void delectInfo();
	void selectInfo();
	void updateInfo();
};
#endif // !STDUDENT_H_INCLUDED
