#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// 常用查找算法 find

// 查找内置数据类型
void test301()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	// 查找容器中是否有 5 这个元素
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		cout << "没有找到！" << endl;
	}
	else
	{
		cout << "找到：" << *it << endl;
	}
}

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	// 重载 ==，底层 find 知道如何对比 Person 数据类型
	bool operator==(const Person& p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	string m_Name;

	int m_Age;
};
// 查找自定义数据类型
void test302()
{
	vector<Person> v;
	// 创建数据
	Person p1("刘备", 35);
	Person p2("关羽", 34);
	Person p3("张飞", 38);
	Person p4("赵云", 30);

	// 放入到容器中
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	Person pp("关羽", 34);

	vector<Person>::iterator it = find(v.begin(), v.end(), pp);
	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到元素。姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
	}
}

int main3()
{
	// test301();
	test302();
	system("pause");
	return 0;
}