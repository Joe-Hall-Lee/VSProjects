#include <iostream>
using namespace std;

// �ṹ��ָ��

// ����ѧ���ṹ��
struct Student
{
	string name; // ����
	int age; // ����
	int score; // ����
};

int main()
{

	// 1. ����ѧ���ṹ�����
	Student s = {"����", 18, 100};

	// 2. ͨ��ָ��ָ��ṹ�����
	Student *p = &s;

	// 3. ͨ��ָ����ʽṹ������е�����

	cout << "  ������" << p->name << "  ���䣺" << p->age << "  ������" << p->score << endl;
	system("pause");

	return 0;
}