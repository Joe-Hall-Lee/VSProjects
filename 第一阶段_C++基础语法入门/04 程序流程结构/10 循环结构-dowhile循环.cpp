#include<iostream>
using namespace std;

int main10()
{
	// do...while 语句
	// 在屏幕中输出 0 到 9 这 10 个数字

	int num = 0;

	do
	{
		cout << num << endl;
		num++;
	} while (num < 10);

	/*
		while (num < 10)
		{
			cout << num << endl;
			num++;
		}
	*/

	// do...while 和 while 循环区别在于 do...while 会先执行一次循环语句
	system("pause");

	return 0;
}