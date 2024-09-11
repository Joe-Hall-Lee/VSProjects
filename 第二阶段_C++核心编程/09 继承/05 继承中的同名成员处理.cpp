#include<iostream>
using namespace std;
// 继承中同名成员处理
class Base5
{
public:
	Base5()
	{
		m_A = 100;
	}
	void func()
	{
		cout << "Base5-func()调用" << endl;
	}
	void func(int a)
	{
		cout << "Base5-func(int a)调用" << endl;
	}
	int m_A;
};
class Son5 :public Base5
{
public:
	Son5()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son5-func()调用" << endl;
	}
	int m_A;
};
// 同名成员属性处理
void test501()
{
	Son5 s;
	cout << "Son5 下 s.m_A=" << s.m_A << endl;
	// 如果通过子类对象，访问到父类中同名成员，需要加作用域
	cout << "Base5 下 s.m_A=" << s.Base5::m_A << endl;
}
// 同名成员函数处理
void test502()
{
	Son5 s;
	s.func(); // 直接调用，调用的是子类中的同名成员

	// 调用父类同名函数
	s.Base5::func();
	// 如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类所有的同名成员函数
	// 如果想访问到父类中被隐藏的同名成员函数，需要加作用域
	s.Base5::func(100);
}
int main5()
{
	// test501();
	test502();
	system("pause");
	return 0;
}