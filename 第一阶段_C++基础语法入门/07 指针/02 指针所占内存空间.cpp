#include <iostream>
using namespace std;

int main2()
{
	// ָ����ռ�ڴ�ռ�
	int a = 10;
	// int* p;
	// p = &a;

	int* p = &a;

	// �� 32 λ����ϵͳ�£�ָ��ռ 4 ���ֽڿռ��С��������ʲô��������
	// �� 64 λ����ϵͳ�£�ָ��ռ 8 ���ֽڿռ��С��������ʲô��������
	cout << "sizeof(int*)=" << sizeof(int*) << endl;
	cout << "sizeof(int*)=" << sizeof(float*) << endl;
	cout << "sizeof(int*)=" << sizeof(double*) << endl;
	cout << "sizeof(int*)=" << sizeof(char*) << endl;

	system("pause");

	return 0;
}