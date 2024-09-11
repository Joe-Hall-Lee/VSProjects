#include <iostream>
using namespace std;

// string 的构造函数

/*
 * string();  // 创建一个空的字符串，例如: string str;
 * string(const char* s);  // 使用字符串 s 初始化
 * string(const string& str);  // 使用一个 string对象初始化另一个 string 对象
 * string(int n, char c);  // 使用 n 个字符 c 初始化
 */
void test101()
{
	string s1; // 默认构造
	const char* str = "hello world";
	string s2(str);

	cout << "s2 = " << s2 << endl;

	string s3(s2);

	cout << " s3 = " << s3 << endl;

	string s4(10, 'a');

	cout << " s4 = " << s4 << endl;
}

int main1()
{
	test101();

	system("pause");

	return 0;
}