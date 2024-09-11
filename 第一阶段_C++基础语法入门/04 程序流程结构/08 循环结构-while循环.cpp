#include<iostream>
using namespace std;

int main8() {
	// while 循环
	// 在屏幕中打印 0~9 这 10 个数字
	/*
		int num = 0;
		cout << num << endl;
		num++;
		cout << num << endl;
		num++;
		cout << num << endl;
		num++;
		cout << num << endl;
		num++;
		cout << num << endl;
		num++;
		cout << num << endl;
		num++;
		cout << num << endl;
		num++;
		cout << num << endl;
		num++;
		cout << num << endl;
		num++;
		cout << num << endl;
	*/

	int num = 0;

	// while() 中填入循环条件
	// 注意事项：在写循环时一定要避免死循环的出现
	while (num < 10)
	{
		cout << num << endl;
		num++;
	}

	system("pause");

	return 0;
}