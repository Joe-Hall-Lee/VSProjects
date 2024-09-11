#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// 常用排序算法 sort
void myPrint9(int val)
{
	cout << val << " ";
}
void test901()
{
	vector <int> v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);

	// 利用 sort 进行升序
	sort(v.begin(), v.end());

	for_each(v.begin(), v.end(), myPrint9);
	cout << endl;
	// 改变为降序
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myPrint9);
	cout << endl;
}

int main9()
{
	test901();
	system("pause");
	return 0;
}