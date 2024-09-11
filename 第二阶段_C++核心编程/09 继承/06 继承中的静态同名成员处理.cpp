#include<iostream>
using namespace std;

// �̳��е�ͬ����̬��Ա����ʽ
class Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Base-func() ����" << endl;
	}
	static void func(int a)
	{
		cout << "Base-func(int a) ����" << endl;
	}
};
int Base::m_A = 100;

class Son6 :public Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Son6-func() ����" << endl;
	}
};
int Son6::m_A = 200;

// ͬ����̬��Ա����
void test601()
{
	// 1. ͨ���������
	cout << "ͨ��������ʣ�" << endl;
	Son6 s;
	cout << "Son6 �� m_A = " << s.m_A << endl;
	cout << "Base �� m_A = " << s.Base::m_A << endl;
	// 2. ͨ����������
	cout << "ͨ���������ʣ�" << endl;
	cout << "Son6 �� m_A = " << Son6::m_A << endl;
	//��һ�� :: ����ͨ��������ʽ���ʣ��ڶ��� :: ������ʸ�����������
	cout << "Base �� m_A = " << Son6::Base::m_A << endl;
}
// ͬ����̬��Ա����

void test02()
{
	// ͨ���������
	cout << "ͨ��������ʣ�" << endl;
	Son6 s;
	s.func();
	s.Base::func();

	// ͨ����������
	cout << "ͨ����������" << endl;
	Son6::func();
	Son6::Base::func();
	// ������ֺ͸���ͬ����̬��Ա������Ҳ�����ظ���������ͬ����̬��Ա����
	// �������ʸ����б�����ͬ����Ա����Ҫ��������
	Son6::Base::func(100);
}
int main6()
{
	// test601();
	test02();
	system("pause");
	return 0;
}