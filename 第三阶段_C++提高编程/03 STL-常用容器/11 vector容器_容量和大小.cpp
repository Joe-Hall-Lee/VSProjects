#include <iostream>
using namespace std;
#include <vector>

void printVector11(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
// vector �����������ʹ�С����
void test1101()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector11(v1);

	if (v1.empty())  // Ϊ�棬��������Ϊ��
	{
		cout << "v1Ϊ��" << endl;
	}
	else
	{
		cout << "v1��Ϊ��" << endl;
		cout << "v1������Ϊ��" << v1.capacity() << endl;
		cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
	}

	// ����ָ����С
	v1.resize(15, 100);  // �������ذ汾������ָ��Ĭ�����ֵ������ 2
	printVector11(v1);  // �������ָ���ı�ԭ�����ˣ�Ĭ����0����µ�λ��

	v1.resize(5);
	printVector11(v1);  // �������ָ���ı�ԭ�����ˣ��������ֻ�ɾ����
}

int main11()
{
	test1101();

	system("pause");

	return 0;
}