#include <iostream>
using namespace std;
class Building2;
class GoodGay2
{
public:
	GoodGay2();
	void visit22(); //参观函数，访问 Building 中的属性

	Building2* building2;
};
class Building2
{
	// GoodGay 类是本类的好朋友，可以访问本类中私有成员
	friend class GoodGay2;
public:
	Building2();
public:
	string m_SittingRoom2; //客厅

private:
	string m_BedRoom2; //卧室
};
// 类外写成员函数
Building2::Building2()

{
	m_SittingRoom2 = "客厅";
	m_BedRoom2 = "卧室";
}
GoodGay2::GoodGay2()
{
	// 创建建筑物对象
	building2 = new Building2;
}
void GoodGay2::visit22()
{
	cout << "好基友类正在访问" << building2->m_SittingRoom2 << endl;

	cout << "好基友类正在访问" << building2->m_BedRoom2 << endl;
}
void test201()
{
	GoodGay2 gg;
	gg.visit22();
}
int main2()
{
	test201();

	system("pause");
	return 0;
}