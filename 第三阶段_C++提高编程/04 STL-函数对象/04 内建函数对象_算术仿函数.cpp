#include <iostream>
using namespace std;
#include <functional> // �ڽ���������ͷ�ļ�

// �ڽ��������������º���

// negate һԪ�º�����ȡ���º���
void test401()
{
	negate<int> n;

	cout << n(50) << endl;
}

// plus ��Ԫ�º������ӷ�
void test02()
{
	plus<int> p;
	cout << p(10, 20) << endl;
}

int main4()
{
	// test401();
	test02();
	system("pause");
	return 0;
}