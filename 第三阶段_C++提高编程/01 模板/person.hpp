#pragma once
#include <iostream>
using namespace std;

template <class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age);

	void showPerson();
	T1 m_Name;
	T2 m_Age;
};

template <class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
}
