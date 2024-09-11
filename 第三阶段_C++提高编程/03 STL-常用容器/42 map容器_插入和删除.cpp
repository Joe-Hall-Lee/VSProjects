#include <iostream>
using namespace std;
#include <map>

// map �����������ɾ��
void printMap(const map<int, int>& m)
{
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}

void test4201()
{
	map<int, int> m;
	// ����
	// ��һ��
	m.insert(pair<int, int>(1, 10));

	// �ڶ���
	m.insert(make_pair(2, 20));

	// ������
	m.insert(map<int, int>::value_type(3, 30));

	// ������
	m[4] = 40;

	// [] ��������룬��;���������� key ���ʵ� value
	cout << m[4] << endl;
	printMap(m);

	// ɾ��
	m.erase(m.begin());
	printMap(m);

	m.erase(30); // ���� key ɾ��
	printMap(m);

	// ���
	// m.erase(m.begin(), m.end());
	m.clear();
	printMap(m);
}

int main42()
{
	test4201();

	system("pause");
	return 0;
}