#include <iostream>
using namespace std;
#include <vector>

// vector 容器互换

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

// 1. 基本使用
void test1401()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	cout << "交换前：" << endl;

	printVector(v1);

	vector<int> v2;

	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}

	printVector(v2);

	cout << "交换后：" << endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);
}
// 2. 实际用途
// 巧用 swap 可以收缩内存空间
void test1402()
{
	vector<int> v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	cout << "v 的容量为：" << v.capacity() << endl;
	cout << "v 的大小为：" << v.size() << endl;

	v.resize(3); // 重新指定大小
	cout << "v 的容量为：" << v.capacity() << endl;
	cout << "v 的大小为：" << v.size() << endl;

	// 巧用 swap 收缩内存
	vector<int>(v).swap(v);
	cout << "v 的容量为：" << v.capacity() << endl;
	cout << "v 的大小为：" << v.size() << endl;
}

int main14()
{
	// test1401();
	test1402();
	system("pause");
	return 0;
}