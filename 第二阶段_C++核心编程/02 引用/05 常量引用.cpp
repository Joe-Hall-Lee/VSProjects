#include <iostream>
using namespace std;

// ��ӡ���ݺ���
void showValue(const int& val)
{
	// val = 1000;
	cout << "val = " << val << endl;
}

int main()
{
	// ��������
	// ʹ�ó��������������βΣ���ֹ�����

	// int a = 10;

	// ���� const ֮�󣬱������������޸� int temp = 10; const int& ret = temp;
	// const int& ret = 10; // ���ñ�����һ��Ϸ����ڴ�ռ�

	// ret = 20; // ���� const ֮���Ϊֻ���������޸�

	int a = 100;
	showValue(a);
	system("pause");

	return 0;
}