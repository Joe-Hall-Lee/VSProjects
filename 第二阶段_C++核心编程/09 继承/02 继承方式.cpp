#include <iostream>
using namespace std;
// 继承方式

// 公共继承
class Base21
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son21 :public Base21
{
public:
	void func()
	{
		m_A = 10; // 父类中的公共权限成员到子类中依然是公共权限
		m_B = 10; // 父类中的保护权限成员到子类中依然是保护权限
		// m_C = 10; // 父类中的私有权限成员子类访问不到
	}
};
void test201()
{
	Son21 s1;
	s1.m_A = 100;
	// s1.m_B = 100; // 到 Son1 中，m_B 是保护权限，类外访问不到
}
// 保护继承
class Base22
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son22 :protected Base22
{
public:
	void func()
	{
		m_A = 10; // 父类中的公共成员，到子类中变为保护权限
		m_B = 10; // 父类中的保护成员，到子类中依然是保护权限
		// m_C = 10; // 父类中的私有成员子类访问不到
	}
};
void test202()
{
	Son22 s2;
	// s2.m_A = 1000; // 在 Son2 中，m_A 变为保护权限，类外访问不到
	// s2.m_B = 1000; // 在 Son2 中，m_B 是保护权限，不可以访问
}
// 私有继承
class Base23
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son23 :private Base23
{
public:
	void func()
	{
		m_A = 10; // 父类中的公共成员，到子类中变为私有成员
		m_B = 10; // 父类中的保护成员，到子类中变为私有成员
		// m_C = 10; // 父类中私有成员，子类访问不到
	}
};
class Grandson3 :public Son23
{
public:
	void func()
	{
		// m_A = 1000; // 到了 Son3 中，m_A 变为私有，即使是儿子也访问不到
		// m_B = 1000; // 到了 Son3 中，m_B 变为私有，即使是儿子也访问不到
	}
};
void test03()
{
	Son23 s3;
	// s3.m_A = 1000; // 到 Son3 中，变为私有成员，类外访问不到
	// s3.m_B = 1000; // 到 Son3 中，变为私有成员，类外访问不到
}
int main2()
{
	system("pause");
	return 0;
}