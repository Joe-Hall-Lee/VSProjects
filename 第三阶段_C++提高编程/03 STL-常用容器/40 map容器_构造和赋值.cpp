#include <iostream>
using namespace std;
#include <map>

// map ����������͸�ֵ
void printMap40(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << " value = " << it->second << endl;
	}
}

void test4001()
{
	// ���� map ����
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(4, 40));

	printMap40(m);

	// ��������
	map<int, int> m2(m);
	printMap40(m2);

	// ��ֵ
	map<int, int> m3;
	m3 = m2;
	printMap40(m3);
}

int main40()
{
	test4001();

	system("pause");

	return 0;
}