// MyProject6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//文件

#include <iostream>
#pragma warning(disable:4996)
using namespace std;

#pragma pack(1) //按1字节对齐结构体
struct stu {
	char name[30];
	int age;
	double score;
};
#pragma pack()  //恢复默认的字节对齐方式

int main()
{
	/*stu student[2];
	
	student[0].age = 21;
	student[0].score = 92.1f;
	strcpy(student[0].name, "张三abc");

	strcpy(student[1].name, "李四def");
	student[1].age = 21;
	student[1].score = 86.2f;

	FILE* fp;
	fp = fopen("structfile.bin", "wb");

	if (fp == NULL) {
		printf("文件打开失败");
	}
	else {
		int strctlen = sizeof(struct stu);
		int retresult = fwrite(&student, sizeof(struct stu), 2, fp);
		fclose(fp);
	}

	FILE* fp1;
	fp1 = fopen("structfile.bin", "rb");
	if (fp1 == NULL) {
		printf("文件打开失败！");
	}
	else {
		int t = sizeof(stu);
		stu studentnew[2];
		int retresult = fread(&studentnew, sizeof(struct stu), 2, fp1);
		fclose(fp1);
	}*/

	//FILE* fp;
	////char ch = 'a';
	////文件的目录要使用“\\”，文件名要用全名（带文件扩展名）
	//fp = fopen("C:\\Users\\DELL\\Desktop\\Al.txt", "w");
	//if (fp == NULL) {
	//    cout << "文件打开失败！" << endl;
	//}
	//else {
	//    fputc('A', fp);
	//    //cout << "文件写入成功！" << endl;
	//    //cout << fputc(ch, fp) << endl;//写入成功返回ASCII码值，a-97
	//    fputc('10', fp);
	//    fputc('B', fp);
	//    //char reco = fgetc(fp);
	//    //while (reco != EOF) {
	//    //    cout << "this" << endl;
	//    //    putchar(reco);
	//    //    reco = fgetc(fp);
	//    //}
	//    fclose(fp);
	//}
	//cout << "文件写入结束，读出开始：" << endl;
	//FILE* fp1;
	//fp1 = fopen("C:\\Users\\DELL\\Desktop\\All.txt", "r");
	//if (fp == NULL) {
	//    cout << "文件打开失败！" << endl;
	//}
	//else {
	//    char reco = fgetc(fp);
	//    while (reco != EOF) {
	//        putchar(reco);
	//        reco = fgetc(fp1);
	//    }
	//    fclose(fp1);
	//}

	//文件读写实战操练函数
	FILE* fp = fopen("config.txt", "rb");//带'b'标记，会原封不动读出文件的所有内容
	if (!fp) {
		printf("文件打开失败\n");
	}
	else {
		char LineBuf[1024];
		while (!feof(fp)) {
			LineBuf[0] = 0;
			if (fgets(LineBuf, sizeof(LineBuf) - 1, fp) == NULL)
				continue;

			if (LineBuf[0] == '\0') {
				continue;
			}
		lblprocstring:
			if (strlen(LineBuf) > 0) {
				if (LineBuf[strlen(LineBuf) - 1] == 10 || LineBuf[strlen(LineBuf) - 1] == 13) {
					//把这个设置为字符串的结束标记0，设置字符串最后一位的ASCII值为0,
					//字符在计算机中存储的值为ASCII码值，，若用二进制方式打开，会将ASCII码值转换为16进制的二进制
					LineBuf[strlen(LineBuf) - 1] = 0; 
					goto lblprocstring;
				}
			}
			if (strlen(LineBuf) <= 0)
				continue;
			printf("%s\n", LineBuf);
		}
		fclose(fp);
	}

}

	// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
	// 调试程序: F5 或调试 >“开始调试”菜单

	// 入门使用技巧: 
	//   1. 使用解决方案资源管理器窗口添加/管理文件
	//   2. 使用团队资源管理器窗口连接到源代码管理
	//   3. 使用输出窗口查看生成输出和其他消息
	//   4. 使用错误列表窗口查看错误
	//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
	//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
