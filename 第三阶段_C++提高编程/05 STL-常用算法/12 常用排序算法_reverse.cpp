#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// 常用排序算法 reverse
void myPrint12(int val)
{
	cout << val << " ";
}
void test1201()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);

	cout << "反转前：" << endl;
	for_each(v.begin(), v.end(), myPrint12);
	cout << endl;

	cout << "反转后：" << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint12);
	cout << endl;
}
int main12()
{
	test1201();

	system("pause");
	return 0;
}