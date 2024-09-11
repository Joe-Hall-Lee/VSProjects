#include <iostream>
using namespace std;
#include <deque>

// deque 容器大小操作
void printDeque18(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test1801()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque18(d1);

	if (d1.empty())
	{
		cout << "d1 为空" << endl;
	}
	else
	{
		cout << "d1 不为空" << endl;

		cout << "d1 的大小为：" << d1.size() << endl;
		// deque 容器没有容量概念
	}
	// 重新指定大小
	// d1.resize(15);
	d1.resize(15, 1);
	printDeque18(d1);

	d1.resize(5);
	printDeque18(d1);
}

int main18()
{
	test1801();
	system("pause");
	return 0;
}