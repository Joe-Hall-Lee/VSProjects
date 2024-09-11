#include <iostream>
using namespace std;
#include <list>

// list 容器大小操作
void printList27(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test2701()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList27(L1);

	// 判断容器是否为空
	if (L1.empty())
	{
		cout << "L1 为空" << endl;
	}
	else
	{
		cout << "L1 不为空" << endl;
		cout << "L1 的元素个数为：" << L1.size() << endl;
	}
	// 重新指定大小
	L1.resize(10, 10000);
	printList27(L1);

	L1.resize(2);
	printList27(L1);
}

int main27() {
	test2701();
	system("pause");
	return 0;
}