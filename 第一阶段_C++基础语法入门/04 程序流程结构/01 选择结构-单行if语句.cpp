#include<iostream>
using namespace std;
int main1()
{
	// 选择结构-单行 if 语句
	// 用户输入分数，如果分数大于 600，视为考上双一流大学，在屏幕上恭喜

	// 1. 用户输入分数
	int score = 0;
	cout << "请输入一个分数：" << endl;
	cin >> score;

	// 2. 打印用户输入的分数
	cout << "您输入的分数为：" << score << endl;

	// 3. 判断分数是否大于 600，如果大于，那么输出
	// 注意事项：if 后面不要加分号
	if (score > 600)
	{
		cout << "恭喜您考上了双一流大学" << endl;
	}

	system("pause");

	return 0;
}