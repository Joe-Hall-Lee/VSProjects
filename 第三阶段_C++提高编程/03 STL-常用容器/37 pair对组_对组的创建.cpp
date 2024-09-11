#include <iostream>
using namespace std;

// pair 对组的创建
void test3701()
{
	//第一种方式
	pair<string, int> p1("Tom", 10);
	cout << "姓名“" << p1.first << " 年龄：" << p1.second << endl;

	//第二种方式
	pair<string, int> p2 = make_pair("Jerry", 30);
	cout << "姓名“" << p2.first << " 年龄：" << p2.second << endl;
}
int main37()
{
	test3701();
	system("pause");
	return 0;
}