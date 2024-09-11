#include <iostream>
using namespace std;

// 拷贝构造函数调用时机

class Person3
{
public:

	Person3()
	{
		cout << "Person3 默认构造函数调用" << endl;
	}

	Person3(int age)
	{
		m_Age = age;
		cout << "Person3 有参构造函数调用" << endl;
	}
	Person3(const Person3& p)
	{
		m_Age = p.m_Age;
		cout << "Person3 拷贝构造函数调用" << endl;
	}
	~Person3()
	{
		cout << "Person3 析构函数调用" << endl;
	}

	int m_Age;
};
// 1. 使用一个已经创建完毕的对象来初始化一个新对象
void test301()
{
	Person3 p1(20);
	Person3 p2(p1);

	cout << "p2 的年龄为：" << p2.m_Age << endl;
}

// 2. 值传递的方式给函数参数传值
void doWork(Person3 p)
{
}

void test302()
{
	Person3 p;
	doWork(p);
}
// 3. 值方式返回局部对象

Person3 doWork2()
{
	Person3 p1;
	cout << &p1 << endl;
	return p1;
}
void test03()
{
	Person3 p = doWork2();
	cout << &p << endl;
}

int main3()
{
	// test301();
	// test302();
	test03();
	system("pause");

	return 0;
}