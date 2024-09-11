#include <iostream>
using namespace std;

// 字符串查找和替换

// 1. 查找
void test401()
{
	string str1 = "abcdefgde";
	int pos = str1.find("de");

	if (pos == -1)
	{
		cout << "未找到字符串" << endl;
	}
	else
	{
		cout << "找到字符串，pos = " << pos << endl;
	}

	// rfind 和 find 区别
	// rfind 从右往左查找，find 从左往右查找

	// rfind
	pos = str1.rfind("de");
	cout << "pos = " << pos << endl;
}

// 2. 替换
void test402()
{
	string str1 = "abcdefg";
	// 从 1 号位置起 3 个字符替换为 "1111"
	str1.replace(1, 3, "1111");
	cout << "str1 = " << str1 << endl;
}

int main4()
{
	// test401();

	test402();

	system("pause");
	return 0;
}