#include <iostream>
using namespace std;

// 第一种解决方式，直接包含源文件
// #include "person.cpp"

// 第二种解决方式，将 .h 和 .cpp 中的内容写到一起，将后缀名改为 hpp 文件

#include "person.hpp"

// 类模板分文件编写问题以及解决

// template<class T1, class T2>
// class Person
// {
// public:
//	Person(T1 name, T2 age);
//
//	void showPerson();
//	T1 m_Name;
//	T2 m_Age;
// };

template <class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}

// template<class T1, class T2>
// void Person<T1, T2>::showPerson()
// {
//	cout << "姓名：" << this->m_Name << " 年龄：" << this->m_Age << endl;
// }

void test1301()
{
	Person<string, int> p("Jerry", 18);
	p.showPerson();
}

int main13()
{
	test1301();
	system("pause");

	return 0;
}