#include <iostream>
using namespace std;
#include <map>
// map ��������С�ͽ���

// ��С
void test4101()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(1, 20));
	m.insert(pair<int, int>(3, 30));

	if (m.empty())
		cout << "m Ϊ��" << endl;
	else
	{
		cout << "m ��Ϊ��" << endl;
		cout << "m �Ĵ�СΪ��" << m.size() << endl;
	}
}

void printMap41(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
		cout << "key = " << it->first << " value = " << it->second << endl;
	cout << endl;
}

// ����
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

	cout << "����ǰ��" << endl;
	printMap41(m);
	printMap41(m2);

	m.swap(m2);
	cout << "������" << endl;
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