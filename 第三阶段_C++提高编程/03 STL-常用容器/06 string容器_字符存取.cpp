#include <iostream>
using namespace std;
// string �ַ���ȡ
void test601()
{
	string str = "hello";

	// cout << "str = " << str << endl;

	// 1. ͨ�� [] ���ʵ����ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	// 2. ͨ�� at ��ʽ�����ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	// �޸ĵ����ַ�
	str[0] = 'x';
	// xello
	cout << "str = " << str << endl;

	str.at(1) = 'x';
	// xxllo
	cout << "str = " << str << endl;
}

int main6()
{
	test601();
	system("pause");
	return 0;
}