#include<iostream>
using namespace std;

int main11()
{
	// 1. �ȴ�ӡ������λ����
	int num = 100;
	do
	{
		// 2. �����е��������ҵ�ˮ�ɻ���
		int a = 0;
		int b = 0;
		int c = 0;

		a = num % 10; // ��ȡ���ֵĸ�λ
		b = num / 10 % 10; // ��ȡ���ֵ�ʮλ
		c = num / 100; // ��ȡ���ֵİ�λ

		if (a*a*a + b*b*b + c*c*c == num) // �����ˮ�ɻ������Ŵ�ӡ
		{
            cout << num << endl;
		}

		num++;
	} while (num < 1000);

	system("pause");

	return 0;
}