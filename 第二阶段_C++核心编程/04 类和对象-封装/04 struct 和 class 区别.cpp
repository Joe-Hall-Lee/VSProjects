#include<iostream>
using namespace std;

class C1
{
	int m_A;  // 默认权限是私有
};

struct C2
{
	int m_A;  // 默认权限是公共
};

int main4()
{
	// struct 和 class 区别
	// struct 默认权限是公有 public
	// class 默认权限是私有 private
	C1 c1;
	// c1.m_A = 100;  // 在 class 里默认权限私有，因此类外不可以访问
	C2 c2;
	c2.m_A = 100;  // 在 struct 默认的权限为公共，因此可以访问
	system("pause");

	return 0;
}