#include<iostream>
using namespace std;

//����Ĭ�ϲ���

//��������Լ��������ݣ������Լ������ݣ����û�У���ô��Ĭ��ֵ
//�﷨������ֵ���� ������(�β� = Ĭ��ֵ){}

int func01(int a, int b=20, int c=30)
{
	return a + b + c;
}



//ע������
//1�����ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ
//int func2(int a=10, int b , int c,int d )
//{
//	return a + b + c;
//}

//2���������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
//������ʵ��ֻ����һ����Ĭ�ϲ���
int func02(int a, int b);

int func02(int a=20, int b=20)
{
	return a + b ;
}
int main1()
{
	//cout << func(10,30) << endl;
	cout << func02(10, 10) << endl;
	system("pause");

	return 0;
}
