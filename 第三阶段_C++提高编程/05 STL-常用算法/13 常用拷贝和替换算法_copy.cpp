#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// 常用拷贝和替换算法 copy
void myPrint13(int val)
{
	cout << val << " ";
}
void test1301()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	vector<int> v2;
	v2.resize(v1.size());

	copy(v1.begin(), v1.end(), v2.begin());

	for_each(v2.begin(), v2.end(), myPrint13);
	cout << endl;
}
int main13()
{
	test1301();
	system("pause");
	return 0;
}