#include <iostream>

using namespace std;
// 建筑物类
class Building1
{
	// goodGay 全局函数是 Building 的好朋友，可以访问 Building 中私有成员
	friend void goodGay1(Building1* building);
public:
	Building1()
	{
		m_SittingRoom1 = "客厅";
		m_BedRoom1 = "卧室";
	}
public:
	string m_SittingRoom1; // 客厅
private:
	string m_BedRoom1; // 卧室
};
// 全局函数
void goodGay1(Building1* building)
{
	cout << "好基友的全局函数正在访问：" << building->m_SittingRoom1 << endl;

	cout << "好基友的全局函数正在访问：" << building->m_BedRoom1 << endl;
}
void test101()
{
	Building1 building;
	goodGay1(&building);
}
int main1()
{
	test101();
	return 0;
}