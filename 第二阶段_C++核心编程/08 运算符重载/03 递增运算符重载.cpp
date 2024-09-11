#include<iostream>
using namespace std;

// 重载递增运算符
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger Myint);
public:
	MyInteger()
	{
		m_Num = 0;
	}
	// 重载前置 ++ 运算符
	MyInteger& operator++()
	{
		// 先进行 ++ 运算
		m_Num++;
		// 再将自身做返回
		return *this;
	}
	// 重载后置 ++ 运算符
	// void operator++(int) int 代表占位参数，可以用于区分前置和后置递增
	MyInteger operator++(int)
	{
		// 先记录当时结果
		MyInteger temp = *this;
		// 后递增
		m_Num++;
		// 最后将记录结果做返回
		return temp;
	}

private:
	int m_Num;
};
void test301()
{
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}
void test302()
{
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}
// 重载 << 运算符
ostream& operator<<(ostream& cout, MyInteger Myint)
{
	cout << Myint.m_Num;
	return cout;
}
// 自定义整型

int main3()
{
	// test301();
	// int a=0;
	// cout << ++(++a) << endl;
	test302();
	system("pause");

	return 0;
}