#include <iostream>
using namespace std;

// �������캯������ʱ��

class Person3
{
public:

	Person3()
	{
		cout << "Person3 Ĭ�Ϲ��캯������" << endl;
	}

	Person3(int age)
	{
		m_Age = age;
		cout << "Person3 �вι��캯������" << endl;
	}
	Person3(const Person3& p)
	{
		m_Age = p.m_Age;
		cout << "Person3 �������캯������" << endl;
	}
	~Person3()
	{
		cout << "Person3 ������������" << endl;
	}

	int m_Age;
};
// 1. ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test301()
{
	Person3 p1(20);
	Person3 p2(p1);

	cout << "p2 ������Ϊ��" << p2.m_Age << endl;
}

// 2. ֵ���ݵķ�ʽ������������ֵ
void doWork(Person3 p)
{
}

void test302()
{
	Person3 p;
	doWork(p);
}
// 3. ֵ��ʽ���ؾֲ�����

Person3 doWork2()
{
	Person3 p1;
	cout << &p1 << endl;
	return p1;
}
void test03()
{
	Person3 p = doWork2();
	cout << &p << endl;
}

int main3()
{
	// test301();
	// test302();
	test03();
	system("pause");

	return 0;
}