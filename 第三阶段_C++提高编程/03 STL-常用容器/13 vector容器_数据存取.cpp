#include <iostream>
using namespace std;
#include <vector>
// vector 容器，数据存取

void test1301()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	// 利用 [] 方式访问数组中元素
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	// 利用 at 方法访问数组中元素
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	// 获取第一个元素
	cout << "第一个元素为：" << v1.front() << endl;

	// 获取最后一个元素
	cout << "最后一个元素为：" << v1.back() << endl;
}

int main13() {
	test1301();
	system("pause");

	return 0;
}