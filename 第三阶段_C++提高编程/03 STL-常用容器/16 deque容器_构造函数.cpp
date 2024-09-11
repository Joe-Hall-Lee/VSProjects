#include <iostream>
using namespace std;
#include <deque>
// deque ���캯��

void printDeque16(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		// *it = 100; // �����е����ݲ������޸���
		cout << *it << " ";
	}
	cout << endl;
}
void test1601()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque16(d1);

	deque<int> d2(d1.begin(), d1.end());
	printDeque16(d2);

	deque<int> d3(10, 100);
	printDeque16(d3);

	deque<int> d4(d3);
	printDeque16(d4);
}

int main16()
{
	test1601();
	system("pause");
	return 0;
}