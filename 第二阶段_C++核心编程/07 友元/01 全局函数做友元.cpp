#include <iostream>

using namespace std;
// ��������
class Building1
{
	// goodGay ȫ�ֺ����� Building �ĺ����ѣ����Է��� Building ��˽�г�Ա
	friend void goodGay1(Building1* building);
public:
	Building1()
	{
		m_SittingRoom1 = "����";
		m_BedRoom1 = "����";
	}
public:
	string m_SittingRoom1; // ����
private:
	string m_BedRoom1; // ����
};
// ȫ�ֺ���
void goodGay1(Building1* building)
{
	cout << "�û��ѵ�ȫ�ֺ������ڷ��ʣ�" << building->m_SittingRoom1 << endl;

	cout << "�û��ѵ�ȫ�ֺ������ڷ��ʣ�" << building->m_BedRoom1 << endl;
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