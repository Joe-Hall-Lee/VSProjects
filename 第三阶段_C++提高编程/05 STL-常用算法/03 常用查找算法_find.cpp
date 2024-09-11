#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// ���ò����㷨 find

// ����������������
void test301()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	// �����������Ƿ��� 5 ���Ԫ��
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		cout << "û���ҵ���" << endl;
	}
	else
	{
		cout << "�ҵ���" << *it << endl;
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
	// ���� ==���ײ� find ֪����ζԱ� Person ��������
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
// �����Զ�����������
void test302()
{
	vector<Person> v;
	// ��������
	Person p1("����", 35);
	Person p2("����", 34);
	Person p3("�ŷ�", 38);
	Person p4("����", 30);

	// ���뵽������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	Person pp("����", 34);

	vector<Person>::iterator it = find(v.begin(), v.end(), pp);
	if (it == v.end())
	{
		cout << "û���ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ�Ԫ�ء�������" << it->m_Name << " ���䣺" << it->m_Age << endl;
	}
}

int main3()
{
	// test301();
	test302();
	system("pause");
	return 0;
}