#include <iostream>
using namespace std;

// ����Ȩ��
// ����
// ����Ȩ�� public����Ա���ڿ��Է��ʣ�������Է���
// ����Ȩ�� protected����Ա���ڿ��Է��ʣ����ⲻ���Է��ʣ����ӿ��Է��ʸ����еı�������
// ˽��Ȩ�� private����Ա���ڿ��Է��ʣ����ⲻ���Է��ʣ����Ӳ����Է��ʸ��׵�˽������
class Person
{
public:
	// ����Ȩ��
	string m_name; // ����

protected:
	// ����Ȩ��
	string m_car; // ����

private:
	// ˽��Ȩ��
	int m_password; // ���п�����

public:
	void func()
	{
		m_name = "����";
		m_car = "������";
		m_password = 123456;
	}
};
int main3()
{
	// ʵ�����������

	Person p1;

	p1.m_name = "����";
	// p1.m_car = "����"; // ����Ȩ�����ݣ���������ʲ���
	// p1.m_password = 123; // ˽��Ȩ�����ݣ�������ʲ���
	p1.func();
	system("pause");

	return 0;
}