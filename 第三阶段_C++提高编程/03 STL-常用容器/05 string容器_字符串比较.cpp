#include<iostream>
using namespace std;

// �ַ����Ƚ�

void test501()
{
	string str1 = "hello";
	string str2 = "xello";

	if (str1.compare(str2) == 0)
	{
		cout << "str1 ���� str2" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1 ���� str2" << endl;
	}
	else
	{
		cout << "str1 С�� str2" << endl;
	}
}

int main5()
{
	test501();
	system("pause");
	return 0;
}