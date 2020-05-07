// Brush click sites.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <windows.h>
#include<cstdio>               //gets()函数
#include<cstdlib>              //system()函数
using namespace std;

int main()
{
    cout << "请输入您需要刷的次数 How many hits you need to brush" << endl;
    int a;
    cin >> a;
    cout << "Print Url(请在Url前加上explorer（然后按一个空格并新建一个引号，在引号内输入您的Url（包含http或https））Please add explorer in front of the Url (and then press a space and create a new quotes, enter your Url in quotation marks (including HTTP or HTTPS)))" << endl;
    char b[500];
    while(gets_s(b))
    for (int i = 1; i <= a; i++)
    {
        system(b);
    }
    cout << "完成 Finish" << endl;
    return 0;
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
