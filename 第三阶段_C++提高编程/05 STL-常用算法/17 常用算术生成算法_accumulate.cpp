#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

#include <numeric>
// �������������㷨
void test1701()
{
	vector<int> v;

	for (int i = 0; i <= 100; i++)
	{
		v.push_back(i);
	}

	// ���� 3����ʼ�ۼ�ֵ
	int total = accumulate(v.begin(), v.end(), 1000);
	cout << "total = " << total << endl;
}
int main17()
{
	test1701();

	system("pause");
	return 0;
}