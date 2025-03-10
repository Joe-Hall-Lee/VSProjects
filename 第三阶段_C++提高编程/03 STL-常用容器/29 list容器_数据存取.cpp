#include <iostream>
using namespace std;
#include <list>

// list 容器，数据存取
void test2901()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	// L1[0] 不可以用 [] 访问 list 容器中的元素

	// L1.at(0) 不可以用 at 方式访问 list 容器中的元素

	// 原因是 list 本质链表，不是用连续线性空间存储数据，迭代器也是不支持随机访问的

	cout << "第一个元素为：" << L1.front() << endl;
	cout << "最后一个元素为：" << L1.back() << endl;

	// 验证迭代器是不支持随机访问的
	list<int>::iterator it = L1.begin();
	it++; // 支持双向
	it--;
	// it = it + 1; // 不支持随机访问
}
int main29()
{
	test2901();
	system("pause");
	return 0;
}