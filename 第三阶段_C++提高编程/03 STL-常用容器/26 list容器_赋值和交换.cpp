#include <iostream>
using namespace std;
#include <list>

// list 容器赋值和交换
void printList26(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

// 赋值
void test2601()
{
	list<int> L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList26(L1);

	list<int> L2;
	L2 = L1; // operator= 赋值
	printList26(L2);

	list<int> L3;
	L3.assign(L1.begin(), L1.end());
	printList26(L3);

	list<int> L4;
	L4.assign(10, 100);
	printList26(L4);
}

// 交换
void test2602()
{
	list<int> L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	list<int> L2;

	L2.assign(10, 100);

	cout << "交换前：" << endl;
	printList26(L1);
	printList26(L2);

	L1.swap(L2);
	cout << "交换后：" << endl;
	printList26(L1);
	printList26(L2);
}

int main26()
{
	// test2601();
	test2602();
	system("pause");
	return 0;
}