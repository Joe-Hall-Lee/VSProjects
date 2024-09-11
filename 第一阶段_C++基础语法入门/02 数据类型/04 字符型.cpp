#include<iostream>
using namespace std;

int main4()
{
	// 1. 字符型变量创建方式
	char ch = 'A';
	cout << ch << endl;

	// 2. 字符型变量所占内存大小
	cout << "char字符型变量所占内存：" << sizeof(char) << endl;

	// 3. 字符型变量常见错误
	// char ch2 = "1"; // 创建字符型变量的时候，要用单引号
	// char ch2 = 'abcdef'; // 创建字符型变量的时候，单引号内只能有一个字符
	//
	// 4. 字符型变量对应ASCⅡ编码
	// a - 97
	// A - 65
	cout << (int)ch << endl;
	system("pause");

	return 0;
}