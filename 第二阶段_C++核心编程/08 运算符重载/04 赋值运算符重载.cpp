#include <iostream>
using namespace std;
// 赋值运算符重载
class Person4
{
public:
	Person4(int age)
	{
		m_Age = new int(age);
	}
	~Person4()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}
	//重载赋值运算符
	Person4& operator=(Person4& p)
	{
		// 编译器提供浅拷贝
		// m_Age = p.m_Age;

		// 应该先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		// 深拷贝
		m_Age = new int(*p.m_Age);
		// 返回对象本身
		return *this;
	}
	int* m_Age;
};
void test401()
{
	Person4 p1(18);
	Person4 p2(20);
	Person4 p3(30);
	p3 = p2 = p1; // 赋值操作
	cout << "p1 的年龄为：" << *p1.m_Age << endl;
	cout << "p2 的年龄为：" << *p2.m_Age << endl;
	cout << "p3 的年龄为：" << *p3.m_Age << endl;
}
int main4()
{
	test401();
	int a = 10;
	int b = 20;
	int c = 30;
	c = b = a;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	system("pause");
	return 0;
}