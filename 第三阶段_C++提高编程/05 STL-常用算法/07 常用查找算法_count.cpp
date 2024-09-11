#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// 常用查找算法 count
// 1. 统计内置数据类型
void test701()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(30);
	v.push_back(40);
	v.push_back(40);
	v.push_back(40);
	v.push_back(40);
	v.push_back(40);
	v.push_back(50);

	int num = count(v.begin(), v.end(), 40);
	cout << "40 的元素个数为：" << num << endl;
}

// 2. 统计自定义数据类型
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	int operator==(const Person& p)
	{
		if (this->m_Age == p.m_Age)
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
void test702()
{
	vector<Person> v;
	Person p1("刘备", 35);
	Person p2("关羽", 35);
	Person p3("张飞", 35);
	Person p4("赵云", 35);
	Person p5("黄忠", 35);

	// 将人员插入到容器中
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	Person p("诸葛亮", 35);
	int num = count(v.begin(), v.end(), p);
	cout << "和诸葛亮同岁数的人员个数为：" << num << endl;
}
int main7()
{
	// test701();
	test702();
	system("pause");
	return 0;
}