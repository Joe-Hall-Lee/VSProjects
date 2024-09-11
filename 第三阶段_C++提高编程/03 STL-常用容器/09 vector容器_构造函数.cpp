#include <iostream>
using namespace std;
#include <vector>

void printVector9(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
// vector ��������
void test901()
{
	vector<int> v1; // Ĭ�Ϲ��죬�޲ι���

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	printVector9(v1);

	// ͨ�����䷽ʽ���й���
	vector<int> v2(v1.begin(), v1.end());
	printVector9(v2);

	// n �� elem ��ʽ����
	vector<int> v3(10, 100);
	printVector9(v3);

	// ��������
	vector<int> v4(v3);
	printVector9(v4);
}

int main9()
{
	test901();

	system("pause");

	return 0;
}