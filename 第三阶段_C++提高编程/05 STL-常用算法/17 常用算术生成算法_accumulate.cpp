#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

#include <numeric>
// 常用算术生成算法
void test1701()
{
	vector<int> v;

	for (int i = 0; i <= 100; i++)
	{
		v.push_back(i);
	}

	// 参数 3：起始累加值
	int total = accumulate(v.begin(), v.end(), 1000);
	cout << "total = " << total << endl;
}
int main17()
{
	test1701();

	system("pause");
	return 0;
}