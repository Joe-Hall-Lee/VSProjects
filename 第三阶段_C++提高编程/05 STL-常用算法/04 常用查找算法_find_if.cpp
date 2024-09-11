#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// 常用查找算法 find_if

// 1. 查找内置数据类型
class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};
void test401()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到大于 5 的数字为：" << *it << endl;
	}
}
// 2. 查找自定义数据类型
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;

	int m_Age;
};

class Greater20
{
public:
	bool operator()(const Person& p)
	{
		return p.m_Age > 20;
	}
};
void test402()
{
	vector<Person> v;
	// 创建数据
	Person p1("刘备", 35);
	Person p2("关羽", 34);
	Person p3("张飞", 38);
	Person p4("赵云", 30);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	// 找年龄大于 20 的人
	vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());
	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
	}
}
int main4()
{
	// test401();
	test402();
	system("pause");
	return 0;
}