#include <iostream>
using namespace std;

int main5() {
	// 三部评书比播放量，判断哪部评书播放量最高

	// 1. 创建三部评书的播放量变量
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	// 2. 让用户输入三部评书的播放量
	cout << "请输入评书《水浒全传（SK）》的播放量" << endl;
	cin >> num1;

	cout << "请输入评书《三国前传（SK）》的播放量" << endl;
	cin >> num2;

	cout << "请输入评书《三国正传（SK）》的播放量" << endl;
	cin >> num3;

	cout << "评书《水浒全传（SK）》的播放量为：" << num1 << endl;
	cout << "评书《三国前传（SK）》的播放量为：" << num2 << endl;
	cout << "评书《三国正传（SK）》的播放量为：" << num3 << endl;

	// 3. 判断哪部播放量最高
	// 先判断《水浒全传（SK）》和《三国前传（SK）》播放量
	if (num1 > num2) // 《水浒全传（SK）》比《三国前传（SK）》播放量高
	{
		if (num1 > num3) // 《水浒全传（SK）》比《三国正传（SK）》播放量高
			cout << "评书《水浒全传（SK）》播放量最高" << endl;

	    else // 《三国正传（SK）》比《水浒全传（SK）》播放量高
	    {
		    cout << "评书《三国正传（SK）》的播放量最高" << endl;
	    }
	}
	else // 《三国前传SK）》比《水浒全传（SK）》播放量高
	{
	    if (num2 > num3) // 《三国前传（SK）》比《三国正传（SK）》播放量高
		cout << "评书《三国前传（SK）》播放量最高" << endl;

		else // 《三国正传（SK）》比《三国前传（SK）》播放量高
		{
		cout << "评书《三国正传（SK）》的播放量最高" << endl;
		}
    }
	system("pause");

	return 0;
}