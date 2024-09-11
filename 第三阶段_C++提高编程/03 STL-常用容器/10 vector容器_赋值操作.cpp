#include <iostream>
using namespace std;
#include <vector>
void printVector10(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

// vector 赋值
void test1001()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector10(v1);

	// 赋值, operator=
	vector <int> v2;
	v2 = v1;
	printVector10(v2);

	// assign
	vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	printVector10(v3);

	// n 个 elem 方式赋值
	vector<int> v4;
	v4.assign(10, 100);
	printVector10(v4);
}
int main10()
{
	test1001();

	system("pause");

	return 0;
}