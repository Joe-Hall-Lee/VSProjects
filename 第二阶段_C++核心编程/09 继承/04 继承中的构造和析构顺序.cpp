#include <iostream>
using namespace std;

// �̳��еĹ��������˳��
class Base4
{
public:
	Base4()
	{
		cout << "Base4 ���캯����" << endl;
	}
	~Base4()
	{
		cout << "Base4 ����������" << endl;
	}
};
class Son4 :public Base4
{
public:
	Son4()
	{
		cout << "Son4 ���캯����" << endl;
	}
	~Son4()
	{
		cout << "Son4 ����������" << endl;
	}
};
void test401()
{
	// Base b;
	// �̳��еĹ����������˳�����£�
	// �ȹ��츸�࣬�������࣬������˳���빹���˳���෴
	Son4 s;
}
int main4()
{
	test401();
	system("pause");
	return 0;
}