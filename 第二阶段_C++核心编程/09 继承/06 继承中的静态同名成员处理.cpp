#include<iostream>
using namespace std;

// 继承中的同名静态成员处理方式
class Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Base-func() 访问" << endl;
	}
	static void func(int a)
	{
		cout << "Base-func(int a) 访问" << endl;
	}
};
int Base::m_A = 100;

class Son6 :public Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Son6-func() 访问" << endl;
	}
};
int Son6::m_A = 200;

// 同名静态成员属性
void test601()
{
	// 1. 通过对象访问
	cout << "通过对象访问：" << endl;
	Son6 s;
	cout << "Son6 下 m_A = " << s.m_A << endl;
	cout << "Base 下 m_A = " << s.Base::m_A << endl;
	// 2. 通过类名访问
	cout << "通过类名访问：" << endl;
	cout << "Son6 下 m_A = " << Son6::m_A << endl;
	//第一个 :: 代表通过类名方式访问，第二个 :: 代表访问父类作用域下
	cout << "Base 下 m_A = " << Son6::Base::m_A << endl;
}
// 同名静态成员函数

void test02()
{
	// 通过对象访问
	cout << "通过对象访问：" << endl;
	Son6 s;
	s.func();
	s.Base::func();

	// 通过类名访问
	cout << "通过类名访问" << endl;
	Son6::func();
	Son6::Base::func();
	// 子类出现和父类同名静态成员函数，也会隐藏父类中所有同名静态成员函数
	// 如果想访问父类中被隐藏同名成员，需要加作用域
	Son6::Base::func(100);
}
int main6()
{
	// test601();
	test02();
	system("pause");
	return 0;
}