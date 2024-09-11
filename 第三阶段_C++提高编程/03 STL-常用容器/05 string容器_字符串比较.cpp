#include<iostream>
using namespace std;

// 字符串比较

void test501()
{
	string str1 = "hello";
	string str2 = "xello";

	if (str1.compare(str2) == 0)
	{
		cout << "str1 等于 str2" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1 大于 str2" << endl;
	}
	else
	{
		cout << "str1 小于 str2" << endl;
	}
}

int main5()
{
	test501();
	system("pause");
	return 0;
}