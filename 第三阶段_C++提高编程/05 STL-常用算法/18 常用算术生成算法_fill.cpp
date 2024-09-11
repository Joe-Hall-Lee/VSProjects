#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// 常用的算术生成算法 fill
void myPrint18(int val)
{
	cout << val << " ";
}
void test1801()
{
	vector<int> v;
	v.resize(10);
	// 后期重新填充
	fill(v.begin(), v.end(), 100);
	for_each(v.begin(), v.end(), myPrint18);
}

int main18()
{
	test1801();
	system("pause");
	return 0;
}