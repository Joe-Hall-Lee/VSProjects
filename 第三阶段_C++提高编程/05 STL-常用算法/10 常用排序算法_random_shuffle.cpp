#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <ctime>

// ���������㷨 random_shuffle

void myPrint10(int val)
{
	cout << val << " ";
}
void test1001()
{
	srand(unsigned int(time(NULL)));
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	// ����ϴ���㷨����˳��
	random_shuffle(v.begin(), v.end());

	for_each(v.begin(), v.end(), myPrint10);
}
int main10(void)
{
	test1001();
	system("pause");
	return 0;
}