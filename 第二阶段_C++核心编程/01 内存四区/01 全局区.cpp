#include<iostream>
using namespace std;

// 全局变量
int g_a = 10;
int g_b = 10;

// const 修饰的全局变量，全局常量
const int c_g_a = 10;
const int c_g_b = 10;
int main1()
{
	// 全局区

	// 全局变量、静态变量、常量

	// 创建普通局部变量
	int a = 10;
	int b = 10;

	cout << "局部变量 a 的地址为：" << (long long)&a << endl;
	cout << "局部变量 b 的地址为：" << (long long)&b << endl;

	cout << "全局变量 g_a 的地址为：" << (long long)&g_a << endl;
	cout << "全局变量 g_b 的地址为：" << (long long)&g_b << endl;

	// 静态变量：在普通变量前面加 static，属于静态变量
	static int s_a = 10;
	static int s_b = 10;

	cout << "静态变量 s_a 的地址为：" << (long long)&s_a << endl;
	cout << "静态变量 s_b 的地址为：" << (long long)&s_b << endl;

	//常量
	//字符串常量
	cout << "字符串常量的地址：" << (long long)&"hello world" << endl;

	//const修饰的变量
	//const修饰的全局变量，const修饰的局部变量
	cout << "全局常量 c_g_a 的地址：" << (long long)&c_g_a << endl;
	cout << "全局常量 c_g_b 的地址：" << (long long)&c_g_b << endl;

	const int c_l_a = 10; // c-const g-global l-local
	const int c_l_b = 10;
	cout << "局部常量 c_l_a 的地址：" << (long long)&c_l_a << endl;
	cout << "局部常量 c_l_b 的地址：" << (long long)&c_l_b << endl;
	system("pause");

	return 0;
}