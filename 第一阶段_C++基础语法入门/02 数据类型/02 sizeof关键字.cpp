#include<iostream>
using namespace std;

int main2()
{
	// 整型：short (2)、int (4)、long (8)、long long (8)
	// 可以利用sizeof求出数据类型占用内存大小
	// 语法：sizeof (数据类型/变量)

	short num1 = 10;
	cout << "short占用内存空间为：" << sizeof(num1) << endl;

	int num2 = 10;
	cout << "int占用内存空间为：" << sizeof(int) << endl;

	long num3 = 10;
	cout << "long占用内存空间为：" << sizeof(long) << endl;

	long long num4 = 10;
	cout << "long long占用内存空间为：" << sizeof(long long) << endl;

	// 整型大小比较
	// short < int <= long <= long long

	system("pause");

	return 0;
}