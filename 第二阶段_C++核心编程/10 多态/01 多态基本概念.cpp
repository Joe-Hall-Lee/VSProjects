#include <iostream>

using namespace std;
// ��̬

// ������
class Animal1
{
public:
	// �麯��
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};
// è��
class Cat1 :public Animal1
{
public:
	// ��д����������ֵ����. ������. �����б���ȫ��ͬ
	virtual void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};
// ����
class Dog :public Animal1
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};
// ִ��˵���ĺ���
// ��ַ��󶨣��ڱ���׶�ȷ��������ַ
// �����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���

// ��̬��̬��������
// 1. �м̳й�ϵ
// 2. ������д������麯��

// ��̬��̬ʹ��
// ��̬��ָ���������ִ���������
void doSpeak(Animal1& animal) // Animal &animal = cat;
{
	animal.speak();
}
void test101()
{
	Cat1 cat;
	doSpeak(cat);
	Dog dog;
	doSpeak(dog);
}
void test102()
{
	cout << "size of Animal=" << sizeof(Animal1) << endl;
}
int main1()
{
	// test101();
	test102();
	system("pause");
	return 0;
}