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

// ���ÿ������滻�㷨 replace
void test1401()
{
	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(20);
	v.push_back(20);
	v.push_back(3);
	v.push_back(2);
	cout << "�滻ǰ��" << endl;

	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;
	// �� 20 �滻�� 2000
	replace(v.begin(), v.end(), 20, 2000);
	cout << "�滻��" << endl;

	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;
}
int main14()
{
	test1401();
	system("pause");
	return 0;
}