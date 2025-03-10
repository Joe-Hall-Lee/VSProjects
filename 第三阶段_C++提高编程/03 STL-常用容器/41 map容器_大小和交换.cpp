#include <iostream>
using namespace std;
#include <map>
// map 容器，大小和交换

// 大小
void test4101()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(1, 20));
	m.insert(pair<int, int>(3, 30));

	if (m.empty())
		cout << "m 为空" << endl;
	else
	{
		cout << "m 不为空" << endl;
		cout << "m 的大小为：" << m.size() << endl;
	}
}

void printMap41(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
		cout << "key = " << it->first << " value = " << it->second << endl;
	cout << endl;
}

// 交换
void test4102()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	map<int, int>m2;
	m2.insert(pair<int, int>(4, 100));
	m2.insert(pair<int, int>(5, 200));
	m2.insert(pair<int, int>(6, 300));

	cout << "交换前：" << endl;
	printMap41(m);
	printMap41(m2);

	m.swap(m2);
	cout << "交换后：" << endl;
	printMap41(m);
	printMap41(m2);
}

int main41()
{
	// test4101();
	test4102();
	system("pause");
	return 0;
}