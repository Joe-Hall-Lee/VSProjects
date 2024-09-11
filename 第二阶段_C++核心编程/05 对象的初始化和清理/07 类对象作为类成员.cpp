#include <iostream>
using namespace std;

// 类对象作为类成员

// 手机类
class Phone
{
public:
	Phone(string pName)
	{
		cout << "Phone的构造函数调用" << endl;
		m_PName = pName;
	}
	~Phone()
	{
		cout << "Phone的析构函数调用" << endl;
	}
	string m_PName;
};
// 人类
class Person7
{
public:
	//  Phone m_Phone = pName; // 隐式转换法
	Person7(string name, string pName) :m_Name(name), m_Phone(pName)
	{
		cout << "Person7 的构造函数调用" << endl;
	}
	~Person7()
	{
		cout << "Person7 的析构函数调用" << endl;
	}
	// 姓名
	string m_Name;

	// 手机
	Phone m_Phone;
};
// 当其它类对象作为本类成员，构造时先构造类对象，再构造自身，析构的顺序与构造相反
void test701()
{
	Person7 p("张三", "苹果 MAX");
	cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
}

int main7()
{
	test701();
	system("pause");

	return 0;
}