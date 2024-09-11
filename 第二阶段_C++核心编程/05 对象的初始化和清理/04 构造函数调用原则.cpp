#include <iostream>
using namespace std;

// 构造函数调用规则

// 1. 创建一个类，C++ 编译器会给每个类都添加至少 3 个函数
// 默认构造（空实现）
// 析构函数（空实现）
// 拷贝函数（值拷贝）

// 2.
// 如果我们写了有参构造函数，编译器就不再提供默认构造，依然提供拷贝构造
// 如果我们写了拷贝构造函数，编译器就不再提供其它普通构造函数了
class Person4
{
public:
	Person4()
	{
		cout << "Person 的默认构造函数调用" << endl;
	}
	Person4(int age)
	{
		cout << "Person 的有参函数调用" << endl;
		m_Age = age;
	}
	Person4(const Person4& p)
	{
		cout << "person 的拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}
	~Person4()
	{
		cout << "Person 的析构函数调用" << endl;
	}
	int m_Age;
};
// void test401()
// {
//     Person4 p;
//
//     p.m_Age=18;
//     Person4 p2(p);
//

//     cout<<"p2 的年龄为："<<p2.m_Age<<endl;
// }

void test402()
{
	Person4 p(28);
	Person4 p2(p);
	cout << "p2 的年龄为：" << p2.m_Age << endl;
}

int main4()
{
	// test401();
	test402();
	system("pause");

	return 0;
}