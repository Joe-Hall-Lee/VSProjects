#include <iostream>
using namespace std;
#include <set>

// set 容器，查找和统计

void test3501()
{
	// 查找
	set<int> s1;

	// 插入数据
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	set<int>::iterator pos = s1.find(300);

	if (pos != s1.end())
	{
		cout << "找到元素：" << *pos << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}
}

// 统计
void test3502()
{
	// 查找
	set<int> s1;

	// 插入数据
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	// 统计 30 的个数
	int num = s1.count(300);
	// 对于 set 而言，统计结果要么是 0，要么是 1
	cout << "num = " << num << endl;
}
int main35()
{
	// test3501();

	test3502();

	system("pause");

	return 0;
}