#include <iostream>
using namespace std;

// �ַ������Һ��滻

// 1. ����
void test401()
{
	string str1 = "abcdefgde";
	int pos = str1.find("de");

	if (pos == -1)
	{
		cout << "δ�ҵ��ַ���" << endl;
	}
	else
	{
		cout << "�ҵ��ַ�����pos = " << pos << endl;
	}

	// rfind �� find ����
	// rfind ����������ң�find �������Ҳ���

	// rfind
	pos = str1.rfind("de");
	cout << "pos = " << pos << endl;
}

// 2. �滻
void test402()
{
	string str1 = "abcdefg";
	// �� 1 ��λ���� 3 ���ַ��滻Ϊ "1111"
	str1.replace(1, 3, "1111");
	cout << "str1 = " << str1 << endl;
}

int main4()
{
	// test401();

	test402();

	system("pause");
	return 0;
}