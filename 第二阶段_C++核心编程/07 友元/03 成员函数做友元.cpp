#include <iostream>
using namespace std;
class Building;
class GoodGay
{
public:
	GoodGay();

	void visit(); //让 visit 函数可以访问 Building 中私有成员
	void visit32(); //让 visit32 函数不可以访问 Building 中私有成员
	Building* building;
};

class Building
{
	// 告诉编译器 GoodGay 类下的 visit 成员函数作为本类的好朋友，可以访问私有成员
	friend void GoodGay::visit();
public:
	Building();
public:
	string m_SittingRoom; // 客厅

private:
	string m_BedRoom; // 卧室
};
// 类外实现成员函数
Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
	building = new Building();
}

void GoodGay::visit()
{
	cout << "visit 函数正在访问：" << building->m_SittingRoom << endl;
	cout << "visit 函数正在访问：" << building->m_BedRoom << endl;
}
void GoodGay::visit32()
{
	cout << "visit32 函数正在访问：" << building->m_SittingRoom << endl;
	//cout<<"visit2 函数正在访问："<<building->m_BedRoom<<endl;
}
void test01()
{
	GoodGay gg;
	gg.visit();
	gg.visit32();
}
int main()
{
	test01();
	system("pause");

	return 0;
}