#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// 二元谓词
class MyCompare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};
void test301()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);

	sort(v.begin(), v.end());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	// 使用函数对象，改变算法策略，变为排序规则从大到小
	sort(v.begin(), v.end(), MyCompare());

	cout << "-------------------------" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main3()
{
	test301();
	system("pause");
	return 0;
}