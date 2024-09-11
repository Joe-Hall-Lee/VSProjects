#include <iostream>
using namespace std;
class Person2
{
public:
	Person2(int age)
	{
		// this 指针指向被调用的成员函数所属的对象
		this->age = age;
	}
	Person2& PersonAddAge(Person2& p)
	{
		this->age += p.age;
		//this 指向 p2 的指针，而 *this 指向的就是 p2 这个对象本体
		return*this;
	}
	int age;
};

// 1. 解决名称冲突
void test201()
{
	Person2 p1(18);
	cout << "p1 的年龄为：" << p1.age << endl;
}

// 2. 返回对象本身用 *this
void test202()
{
	Person2 p1(10);
	Person2 p2(10);
	// 链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2 的年龄为：" << p2.age << endl;
}

int main2()
{
	// test201();

	test202();
	system("pause");

	return 0;
}