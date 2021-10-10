// MyProject6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//文件

#include <iostream>
#pragma warning(disable:4996)
using namespace std;

int main()
{
    FILE* fp;
    //char ch = 'a';
    //文件的目录要使用“\\”，文件名要用全名（带文件扩展名）
    fp = fopen("C:\\Users\\DELL\\Desktop\\Al.txt", "w");
    if (fp == NULL) {
        cout << "文件打开失败！" << endl;
    }
    else {
        fputc('A', fp);
        //cout << "文件写入成功！" << endl;
        //cout << fputc(ch, fp) << endl;//写入成功返回ASCII码值，a-97
        fputc('10', fp);
        fputc('B', fp);
        //char reco = fgetc(fp);
        //while (reco != EOF) {
        //    cout << "this" << endl;
        //    putchar(reco);
        //    reco = fgetc(fp);
        //}
        fclose(fp);
    }
    cout << "文件写入结束，读出开始：" << endl;
    FILE* fp1;
    fp1 = fopen("C:\\Users\\DELL\\Desktop\\All.txt", "r");
    if (fp == NULL) {
        cout << "文件打开失败！" << endl;
    }
    else {
        char reco = fgetc(fp);
        while (reco != EOF) {
            putchar(reco);
            reco = fgetc(fp1);
        }
        fclose(fp1);
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
