#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// ���ò����㷨 count
// 1. ͳ��������������
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
	cout << "40 ��Ԫ�ظ���Ϊ��" << num << endl;
}

// 2. ͳ���Զ�����������
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
	Person p1("����", 35);
	Person p2("����", 35);
	Person p3("�ŷ�", 35);
	Person p4("����", 35);
	Person p5("����", 35);

	// ����Ա���뵽������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	Person p("�����", 35);
	int num = count(v.begin(), v.end(), p);
	cout << "�������ͬ��������Ա����Ϊ��" << num << endl;
}
int main7()
{
	// test701();
	test702();
	system("pause");
	return 0;
}