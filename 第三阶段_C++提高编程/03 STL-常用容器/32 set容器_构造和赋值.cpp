#include <iostream>
using namespace std;
#include <set>

// set 容器构造和赋值
void printSet32(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test3201()
{
	set<int>s1;

	// 插入数据，只有 insert 方式
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);

	// 遍历容器
	// set 容器特点：所有元素插入时候自动被排序
	// set 容器不允许插入重复值
	printSet32(s1);

	// 拷贝构造
	set<int>s2(s1);
	printSet32(s2);

	// 赋值
	set<int>s3;
	s3 = s2;
	printSet32(s3);
}

int main32() {
	test3201();

	system("pause");
	return 0;
}