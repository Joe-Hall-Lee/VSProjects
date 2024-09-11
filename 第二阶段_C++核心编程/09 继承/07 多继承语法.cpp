#include <iostream>
using namespace std;
// 多继承语法
class Base1
{
public:
	Base1()
	{
		m_A = 100;
	}
	int m_A;
};
class Base2
{
public:
	Base2()
	{
		m_A = 200;
	}
	int m_A;
};
// 子类需要继承 Base1 和 Base2
// 语法：class 子类 :继承方式 父类 1, 继承方式 父类 2 ...
class Son :public Base1, public Base2
{
public:
	Son()
	{
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};
void test701()
{
	Son s;
	cout << "size of Son = " << sizeof(s) << endl;
	cout << "m_A = " << s.Base1::m_A << endl;
	cout << "m_A = " << s.Base2::m_A << endl;
}
int main7()
{
	test701();
	system("pause");
	return 0;
}