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

class Greater30
{
public:
	bool operator()(int val)
	{
		return val >= 30;
	}
};

// ���ÿ������滻�㷨 replace_if

void test1501()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	cout << "�滻ǰ��" << endl;
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;

	// �����ڵ��� 30 ���滻Ϊ 3000
	replace_if(v.begin(), v.end(), Greater30(), 3000);
	cout << "�滻��" << endl;
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;
}
int main15()
{
	test1501();
	system("pause");
	return 0;
}