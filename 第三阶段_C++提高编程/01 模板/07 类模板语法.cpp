#include <iostream>
using namespace std;

// ��ģ��
template <class NameType, class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "name: " << this->m_Name << " age: " << this->m_Age << endl;
	}
	NameType m_Name;
	AgeType m_Age;
};

void test701()
{
	Person<string, int> p1("�����", 999);
	p1.showPerson();
}

int main7()
{
	test701();

	system("pause");
	return 0;
}