#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <functional>

// �ڽ��������󣬹�ϵ�º���
// ���� greater
class MyCompare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};

void test501()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}

	cout << endl;

	// ����
	// sort(v.begin(), v.end(), MyCompare());
	// greater<int> () �ڽ���������
	sort(v.begin(), v.end(), greater<int>());

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}

	cout << endl;
}
int main5()
{
	test501();
	system("pause");
	return 0;
}