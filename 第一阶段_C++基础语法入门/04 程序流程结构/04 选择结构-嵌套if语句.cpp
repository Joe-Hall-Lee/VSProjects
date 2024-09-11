#include<iostream>
using namespace std;

int main4()
{
	/*
		提示用户输入一个高考分数，根据分数做如下判断：
		分数如果大于 600 视为考上双一流，大于500分考上一本，大于 400 分考上二本，其余视为未考上本科。
		在双一流分数中，如果大于 700 分，考入清北，大于 650 分，考入华五，大于 600 分，考入中九。
	*/

	// 1. 提示输入高考分数
	int score = 0;
	cout << "请输入高考分数:" << endl;
	cin >> score;

	// 2. 显示高考分数
	cout << "您输入的高考分数为：" << score << endl;
	// 3. 判断
	// 如果大于 600 双一流
		// 大于 700 清北
		// 大于 650 华五
		// 大于 600 中九
	// 如果大于 500 一本
	// 如果大于 400 二本
	// 其余情况，未考上本科
	if (score > 600)
	{
		cout << "恭喜您考上了双一流大学" << endl;
		if (score > 700)
		{
			cout << "你能考入清北" << endl;
		}
		else if (score > 650) // 第二个条件判断
		{
			cout << "您能考入华五" << endl;
		}
		else if (score > 600)
		{
			cout << "您能考入中九" << endl;
		}
		else
		{
			cout << "未考入本科大学，请再接再厉" << endl;
		}
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