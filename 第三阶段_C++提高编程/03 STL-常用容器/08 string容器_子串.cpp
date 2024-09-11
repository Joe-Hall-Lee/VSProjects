#include <iostream>
using namespace std;

// string 子串

void test801()
{
	string str = "abcdef";

	string subStr = str.substr(1, 3);

	cout << "subStr = " << subStr << endl;
}

// 使用操作
void test802()
{
	string email = "zhangsan@sina.com";

	// 从邮件地址中获取用户名信息
	int pos = email.find("@");  // 8
	cout << pos << endl;

	string userName = email.substr(0, pos);
	cout << userName << endl;
}
int main8()
{
	// test801();

	test802();

	system("pause");

	return 0;
}