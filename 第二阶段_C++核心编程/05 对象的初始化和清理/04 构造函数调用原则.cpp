#include <iostream>
using namespace std;

// ���캯�����ù���

// 1. ����һ���࣬C++ ���������ÿ���඼������� 3 ������
// Ĭ�Ϲ��죨��ʵ�֣�
// ������������ʵ�֣�
// ����������ֵ������

// 2.
// �������д���вι��캯�����������Ͳ����ṩĬ�Ϲ��죬��Ȼ�ṩ��������
// �������д�˿������캯�����������Ͳ����ṩ������ͨ���캯����
class Person4
{
public:
	Person4()
	{
		cout << "Person ��Ĭ�Ϲ��캯������" << endl;
	}
	Person4(int age)
	{
		cout << "Person ���вκ�������" << endl;
		m_Age = age;
	}
	Person4(const Person4& p)
	{
		cout << "person �Ŀ������캯������" << endl;
		m_Age = p.m_Age;
	}
	~Person4()
	{
		cout << "Person ��������������" << endl;
	}
	int m_Age;
};
// void test401()
// {
//     Person4 p;
//
//     p.m_Age=18;
//     Person4 p2(p);
//

//     cout<<"p2 ������Ϊ��"<<p2.m_Age<<endl;
// }

void test402()
{
	Person4 p(28);
	Person4 p2(p);
	cout << "p2 ������Ϊ��" << p2.m_Age << endl;
}

int main4()
{
	// test401();
	test402();
	system("pause");

	return 0;
}