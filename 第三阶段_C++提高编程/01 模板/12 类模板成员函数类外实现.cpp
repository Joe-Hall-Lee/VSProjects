#include <iostream>
using namespace std;

// ��ģ���Ա��������ʵ��
template <class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age);
	//{
	//	this->m_Name = name;
	//	this->m_Age = age;
	//}

	void showPerson12();
	//{
	//	cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
	//}
	T1 m_Name;
	T2 m_Age;
};

// ���캯������ʵ��
template <class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}

// ��Ա��������ʵ��
template <class T1, class T2>
void Person<T1, T2>::showPerson12()
{
	cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
}

void test1201()
{
	Person<string, int> P("Tom", 20);
	P.showPerson12();
}
int main12()
{
	test1201();
	system("pause");
	return 0;
}