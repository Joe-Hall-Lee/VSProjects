#include <iostream>
using namespace std;

// pair ����Ĵ���
void test3701()
{
	//��һ�ַ�ʽ
	pair<string, int> p1("Tom", 10);
	cout << "������" << p1.first << " ���䣺" << p1.second << endl;

	//�ڶ��ַ�ʽ
	pair<string, int> p2 = make_pair("Jerry", 30);
	cout << "������" << p2.first << " ���䣺" << p2.second << endl;
}
int main37()
{
	test3701();
	system("pause");
	return 0;
}