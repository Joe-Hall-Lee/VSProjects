#include<iostream>
using namespace std;

int main3() {
	// 选择结构-多条件 if 语句
	// 输入一个考试分数，如果大于 600 分，视为考上双一流，在屏幕输出
	// 大于 500，视为考上一本，屏幕输出
	// 大于 400，视为考上二本，屏幕输出
	// 小于等于 400 分，视为未考上本科，在屏幕输出

	// 1. 用户输入分数
	int score = 0;
	cout << "请输入考试分数：" << endl;
	cin >> score;

	// 2. 提示用户输入的分数
	cout << "您输入的考试分数为：" << score << endl;

	// 3. 判断
	// 如果大于 600，考上双一流
	// 如果大于 500，考上一本
	// 如果大于 400，考上二本
	// 前三个都没有满足，未考上本科
	if (score > 600)
	{
		cout << "恭喜您考上了双一流大学" << endl;
	}
	else if (score > 500) // 第二个条件判断
	{
		cout << "恭喜您考上了一本大学" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜您考上了二本大学" << endl;
	}
	else
	{
		cout << "未考入本科大学，请再接再厉" << endl;
	}
	system("pause");

	return 0;
}