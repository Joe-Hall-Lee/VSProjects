#include <iostream>
using namespace std;

// 成员变量和成员函数分开存储
class Person1
{
	int m_A; // 非静态成员变量属于类的对象上
	static int m_B; // 静态成员变量不属于类对象上
	void func() {}; // 非静态成员函数不属于类对象上
	static void func2() {}; // 静态成员函数不属于类的对象上
};
int Person1::m_B = 0;

void test101()
{
	Person1 p;
	// 空对象占用内存空间为：1
	// C++ 编译器会给每一个空对象也分配一个字节空间，是为了区分空对象占内存的位置
	// 每一个空对象也应该有一个独一无二的内存地址
	cout << "size of p=" << sizeof(p) << endl;
}
void test102()
{
	Person1 p;
	cout << "size of p=" << sizeof(p) << endl;
}
int main1()
{
	// test101();
	test102();
	system("pause");
	return 0;
}