#include <iostream>
using namespace std;
#include <vector>

// vector 容器，预留空间
void test1501()
{
	vector<int> v;

	// 利用 reserve 预留空间
	v.reserve(100000);
	int num = 0; // 统计开辟次数
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << "num = " << num << endl;
}

int main15()
{
	test1501();
	system("pause");
	return 0;
}