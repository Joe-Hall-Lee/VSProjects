#include<iostream>
using namespace std;
#include<list>

// list 容器，排序案例，对于自定义数据类型，做排序

// 按照年龄进行升序，如果年龄相同按照身高进行降序
class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}

	string m_Name; // 姓名
	int m_Age; // 年龄
	int m_Height; // 身高
};

// 指定排序规则
bool comparePerson(Person& p1, Person& p2)
{
	// 按照年龄升序
	if (p1.m_Age == p2.m_Age)
	{
		// 年龄相同，按照身高降序
		return p1.m_Height > p2.m_Height;
	}
	else {
		return p1.m_Age < p2.m_Age;
	}
}
void test3101()
{
	list<Person>L; // 创建容器

	// 直接在 list 中构造数据
	L.emplace_back("刘备", 35, 175);
	L.emplace_back("曹操", 45, 180);
	L.emplace_back("孙权", 40, 170);
	L.emplace_back("赵云", 25, 190);
	L.emplace_back("张飞", 35, 160);
	L.emplace_back("关羽", 35, 200);

	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << " 年龄：" << (*it).m_Age << " 身高：" << it->m_Height << endl;
	}

	// 排序
	cout << "--------------------------------" << endl;
	cout << "排序后：" << endl;
	L.sort(comparePerson);
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << " 年龄：" << (*it).m_Age << " 身高：" << it->m_Height << endl;
	}
}
int main31()
{
	test3101();

	system("pause");

	return 0;
}