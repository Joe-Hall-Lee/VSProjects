#include <iostream>
using namespace std;
class Person2
{
public:
	Person2(int age)
	{
		// this ָ��ָ�򱻵��õĳ�Ա���������Ķ���
		this->age = age;
	}
	Person2& PersonAddAge(Person2& p)
	{
		this->age += p.age;
		//this ָ�� p2 ��ָ�룬�� *this ָ��ľ��� p2 ���������
		return*this;
	}
	int age;
};

// 1. ������Ƴ�ͻ
void test201()
{
	Person2 p1(18);
	cout << "p1 ������Ϊ��" << p1.age << endl;
}

// 2. ���ض������� *this
void test202()
{
	Person2 p1(10);
	Person2 p2(10);
	// ��ʽ���˼��
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2 ������Ϊ��" << p2.age << endl;
}

int main2()
{
	// test201();

	test202();
	system("pause");

	return 0;
}