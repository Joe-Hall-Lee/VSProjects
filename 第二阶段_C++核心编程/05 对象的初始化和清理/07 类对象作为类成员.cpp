#include <iostream>
using namespace std;

// �������Ϊ���Ա

// �ֻ���
class Phone
{
public:
	Phone(string pName)
	{
		cout << "Phone�Ĺ��캯������" << endl;
		m_PName = pName;
	}
	~Phone()
	{
		cout << "Phone��������������" << endl;
	}
	string m_PName;
};
// ����
class Person7
{
public:
	//  Phone m_Phone = pName; // ��ʽת����
	Person7(string name, string pName) :m_Name(name), m_Phone(pName)
	{
		cout << "Person7 �Ĺ��캯������" << endl;
	}
	~Person7()
	{
		cout << "Person7 ��������������" << endl;
	}
	// ����
	string m_Name;

	// �ֻ�
	Phone m_Phone;
};
// �������������Ϊ�����Ա������ʱ�ȹ���������ٹ�������������˳���빹���෴
void test701()
{
	Person7 p("����", "ƻ�� MAX");
	cout << p.m_Name << "����" << p.m_Phone.m_PName << endl;
}

int main7()
{
	test701();
	system("pause");

	return 0;
}