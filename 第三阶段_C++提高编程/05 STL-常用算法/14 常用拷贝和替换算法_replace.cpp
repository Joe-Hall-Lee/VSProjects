#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

// 常用拷贝和替换算法 replace
void test1401()
{
	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(20);
	v.push_back(20);
	v.push_back(3);
	v.push_back(2);
	cout << "替换前：" << endl;

	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;
	// 将 20 替换成 2000
	replace(v.begin(), v.end(), 20, 2000);
	cout << "替换后：" << endl;

	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;
}
int main14()
{
	test1401();
	system("pause");
	return 0;
}