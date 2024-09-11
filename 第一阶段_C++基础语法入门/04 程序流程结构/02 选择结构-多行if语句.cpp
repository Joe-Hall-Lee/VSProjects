#include <iostream>
using namespace std;

int main2()
{
	// 选择结构-多行if语句
	// 输入考试分数，如果分数大于 600，视为考上双一流大学，在屏幕上输出
	// 如果没考上双一流大学，打印未考上双一流大学

	// 1. 输入考试分数
	int score = 0;
	cout << "请输入一个考试分数：" << endl;
	cin >> score;

	// 2. 提示用户输入的分数
	cout << "您输入的分数为：" << endl;

	// 3. 判断，如果大于 600，打印考上双一流，否则打印未考入双一流
	if (score > 600) // 大于 600 分执行下面大括号中的内容
	{
		cout << "恭喜您考上双一流大学" << endl;
	}
	else // 不大于 600 分，执行 else 后大括号中的内容
	{
		cout << "未考上双一流大学" << endl;
	}

	system("pause");

	return 0;
}