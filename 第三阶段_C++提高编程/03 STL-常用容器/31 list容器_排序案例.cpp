#include<iostream>
using namespace std;
#include<list>

// list �������������������Զ����������ͣ�������

// ������������������������ͬ������߽��н���
class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}

	string m_Name; // ����
	int m_Age; // ����
	int m_Height; // ���
};

// ָ���������
bool comparePerson(Person& p1, Person& p2)
{
	// ������������
	if (p1.m_Age == p2.m_Age)
	{
		// ������ͬ��������߽���
		return p1.m_Height > p2.m_Height;
	}
	else {
		return p1.m_Age < p2.m_Age;
	}
}
void test3101()
{
	list<Person>L; // ��������

	// ֱ���� list �й�������
	L.emplace_back("����", 35, 175);
	L.emplace_back("�ܲ�", 45, 180);
	L.emplace_back("��Ȩ", 40, 170);
	L.emplace_back("����", 25, 190);
	L.emplace_back("�ŷ�", 35, 160);
	L.emplace_back("����", 35, 200);

	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "������" << (*it).m_Name << " ���䣺" << (*it).m_Age << " ��ߣ�" << it->m_Height << endl;
	}

	// ����
	cout << "--------------------------------" << endl;
	cout << "�����" << endl;
	L.sort(comparePerson);
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "������" << (*it).m_Name << " ���䣺" << (*it).m_Age << " ��ߣ�" << it->m_Height << endl;
	}
}
int main31()
{
	test3101();

	system("pause");

	return 0;
}