#include <iostream>
using namespace std;

// 定义加法函数
// 函数定义的时候，num1 和 num2 并没有真实数据，只是一个形式上的参数，简称形参
int add2(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main2()
{
	// main 函数中调用 add 函数
	int a = 10;
	int b = 20;

	// 函数调用语法：函数名称(参数)
	// a 和 b 称为实际参数，简称实参
	// 当调用参数时，实参的值会传递给形参
	int c = add2(a, b);

	cout << "c=" << c << endl;

	a = 100;
	b = 500;
	c = add2(a, b);

	cout << "c = " << c << endl;

	system("pause");

	return 0;
}