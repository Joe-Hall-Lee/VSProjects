#include <iostream>
using namespace std;
#include <deque>

void printDeque17(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
// deque 容器赋值操作
void test1701()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque17(d1);

	// operator= 赋值
	deque<int> d2;
	d2 = d1;
	printDeque17(d2);

	// assign 赋值
	deque<int> d3;
	d3.assign(d1.begin(), d1.end());
	printDeque17(d3);

	deque<int> d4;
	d4.assign(10, 100);
	printDeque17(d4);
}

int main17() {
	test1701();
	system("pause");
	return 0;
}