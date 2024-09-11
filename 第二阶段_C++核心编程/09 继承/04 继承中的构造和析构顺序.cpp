#include <iostream>
using namespace std;

// 继承中的构造和析构顺序
class Base4
{
public:
	Base4()
	{
		cout << "Base4 构造函数！" << endl;
	}
	~Base4()
	{
		cout << "Base4 析构函数！" << endl;
	}
};
class Son4 :public Base4
{
public:
	Son4()
	{
		cout << "Son4 构造函数！" << endl;
	}
	~Son4()
	{
		cout << "Son4 析构函数！" << endl;
	}
};
void test401()
{
	// Base b;
	// 继承中的构造和析构的顺序如下：
	// 先构造父类，后构造子类，析构的顺序与构造的顺序相反
	Son4 s;
}
int main4()
{
	test401();
	system("pause");
	return 0;
}