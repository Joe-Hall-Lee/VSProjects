#include <iostream>
using namespace std;

// 打印数据函数
void showValue(const int& val)
{
	// val = 1000;
	cout << "val = " << val << endl;
}

int main()
{
	// 常量引用
	// 使用场景：用来修饰形参，防止误操作

	// int a = 10;

	// 加上 const 之后，编译器将代码修改 int temp = 10; const int& ret = temp;
	// const int& ret = 10; // 引用必须引一块合法的内存空间

	// ret = 20; // 加上 const 之后变为只读，不可修改

	int a = 100;
	showValue(a);
	system("pause");

	return 0;
}