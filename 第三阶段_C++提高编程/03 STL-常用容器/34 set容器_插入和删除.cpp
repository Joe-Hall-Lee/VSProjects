#include <iostream>
using namespace std;
#include <set>

// set �����������ɾ��

void printSet(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test3401()
{
	set<int> s1;
	// ����
	s1.insert(30);
	s1.insert(10);
	s1.insert(20);
	s1.insert(40);

	// ����
	printSet(s1);

	// ɾ��
	s1.erase(s1.begin());
	printSet(s1);

	// ɾ�����ذ汾
	s1.erase(30);
	printSet(s1);

	// ���
	// s1.erase(s1.begin(), s1.end());
	s1.clear();
}
int main34()
{
	test3401();
	system("pause");
	return 0;
}