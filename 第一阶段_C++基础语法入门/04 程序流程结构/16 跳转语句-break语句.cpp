#include<iostream>
using namespace std;

int main16()
{
	// break 的使用时机

	// 1. 出现在 switch 语句中

	// cout << "请选择您想听的评书" << endl;
	// cout << "1. 《戏说镜花缘之唐氏大仙传（SK）》" << endl;
	// cout << "2. 《东周列国志（SK)》" << endl;
	// cout << "3. 《水浒全传(SK)》" << endl;

	// int select = 0; // 创建选择结果的变量

	// cin >> select; // 等待用户输入

	// switch (select)
	// {
	// case 1:
	//     cout << "您可以收听《戏说镜花缘之唐氏大仙传（SK）》了" << endl;
	//	   break; // 退出switch语句
	// case 2:
	//	   cout << "您可以收听《东周列国志(SK)》了" << endl;
	//	   break;
	// case 3:
	//	   cout << "您可以收听《水浒全传（SK）了" << endl;
	//	   break;
	// default:
	//	   break;
	// }
	// 2. 出现在循环语句中
	// for (int i = 0; i < 10; i++)
	// {
	//     // 如果i等于5，退出循环，不再打印
	// 	   if (i == 5)
	// 	   {
	// 		   break; // 退出循环
	//     }
	// }

	// 3. 出现在嵌套循环语句中

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break; // 退出内层循环
			}
			cout << "--<-<-<@" << "   ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}