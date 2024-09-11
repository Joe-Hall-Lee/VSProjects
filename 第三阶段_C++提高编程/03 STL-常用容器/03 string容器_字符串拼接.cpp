#include <iostream>
using namespace std;

// string 字符串拼接
/*
* string& operator+= (const char* str);  // 重载 += 操作符
* string& operator+= (const char c);  // 重载 += 操作符
* string& operator+= (const string& str);  // 重载 += 操作符
* string& append(const char *s);  // 把字符串 s 连接到当前字符串结尾
* string& append(const char *s, int n);  // 把字符串 s 的前 n 个字符连接到当前字符串结尾
* string& append(const char &s);  // 同 operator+= (const string& str)
* string& append(const string &s, int pos, int n);  // 字符串 s 中从 pos 开始的 n 个字符连接到字符串结尾
*/

void test301()
{
	string str1 = "我";

	str1 += "爱玩游戏";

	cout << "str1 = " << str1 << endl;

	str1 += ':';

	cout << "str1 = " << str1 << endl;

	string str2 = "LOL DNF";

	str1 += str2;
	cout << "str1 = " << str1 << endl;

	string str3 = "I";
	str3.append(" love ");
	cout << "str3 = " << str3 << endl;

	str3.append("game abcde", 4);
	// I love game
	cout << "str3 = " << str3 << endl;

	// str3.append(str2);

	// str3.append(str2, 0, 3);  // 只截取到 LOL
	str3.append(str2, 4, 3);  // 只截取 DNF，参数 2 从哪个位置开始截取，参数 3 截取字符个数
	// I love gameLOL DNF
	cout << "str3 = " << str3 << endl;
}
int main3()
{
	test301();

	system("pause");

	return 0;
}