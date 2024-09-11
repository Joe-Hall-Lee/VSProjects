#include <iostream>
using namespace std;
// 菱形继承
class Animal
{
public:

	int m_Age;
};
// 利用虚继承解决菱形继承的问题
// 在继承之前加上关键字virtual变为虚继承
// Animal 类称为虚基类
// 羊类
class Sheep :virtual public Animal
{
};
// 驼类
class Tuo :virtual public Animal
{
};
// 羊驼类
class SheepTuo :public Sheep, public Tuo {};
void test01()
{
	SheepTuo st;

	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	// 当菱形继承时，两个父类具有相同数据，需要加作用域区分
	cout << "st.Sheep::m_Age=" << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age=" << st.Tuo::m_Age << endl;
	cout << "st.m_Age=" << st.m_Age << endl;
	// 这份数据我们知道只要有一份就可以，菱形继承导致数据有两份，浪费资源
}

int main()
{
	test01();
	system("pause");
	return 0;
}