#include <iostream>
using namespace std;
#include <set>

// set 容器，大小和交换
void printSet33(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test3301()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	// 打印容器
	printSet33(s1);

	// 判断是否为空
	if (s1.empty())
	{
		cout << "s1 为空" << endl;
	}
	else
	{
		cout << "s1 不为空" << endl;
		cout << "s1 的大小为：" << s1.size() << endl;
	}
}
// 交换
void test02()
{
	set<int> s1;
	// 插入数据
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int> s2;
	// 插入数据
	s2.insert(100);
	s2.insert(300);
	s2.insert(200);
	s2.insert(400);

	cout << "交换前：" << endl;
	printSet33(s1);
	printSet33(s2);

	cout << "交换后：" << endl;
	s1.swap(s2);

	printSet33(s1);
	printSet33(s2);
}
int main33()
{
	// test3301();
	test02();
	system("pause");
	return 0;
}