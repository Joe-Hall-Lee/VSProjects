#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// ���������㷨 reverse
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

	cout << "��תǰ��" << endl;
	for_each(v.begin(), v.end(), myPrint12);
	cout << endl;

	cout << "��ת��" << endl;
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