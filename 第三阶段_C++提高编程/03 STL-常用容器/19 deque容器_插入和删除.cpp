#include <iostream>
using namespace std;
#include <deque>

// deque 容器插入和删除

void printDeque19(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

// 两端操作
void test1901()
{
	deque<int> d1;

	// 尾差
	d1.push_back(10);
	d1.push_back(20);

	// 头插
	d1.push_front(100);
	d1.push_front(200);

	// 200 100 12 20
	printDeque19(d1);

	// 尾删
	d1.pop_back();
	// 200 100 10
	printDeque19(d1);

	// 头删
	d1.pop_front();
	// 100 10
	printDeque19(d1);
}

void test1902()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);

	// 200 100 10 20
	printDeque19(d1);

	// insert 插入
	d1.insert(d1.begin(), 1000);
	// 1000 200 100 10 20
	printDeque19(d1);

	d1.insert(d1.begin(), 2, 10000);
	// 10000 10000 1000 200 100 10 20
	printDeque19(d1);

	// 按照区间进行插入
	deque<int> d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d1.insert(d1.begin(), d2.begin(), d2.end());
	// 1 2 3 10000 10000 1000 200 100 10 20 1 2 3 4 5
	printDeque19(d1);
}

void test03()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);

	// 删除
	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);
	// 200 10 20
	printDeque19(d1);

	// 按区间方式删除
	// d1.erase(d1.begin(), d1.end());
	// 清空
	d1.clear();
	printDeque19(d1);
}

int main19()
{
	// test1901();
	// test1902();
	test03();
	system("pause");
	return 0;
}