#include <iostream>
using namespace std;

// 1. ���캯���ķ��༰����
// ����
// ���ղ������ࣺ�޲ι��죨Ĭ�Ϲ��죩���вι���
// �������ͷ��ࣺ��ͨ����Ϳ�������
class Person2
{
public:
	// ���캯��
	Person2()
	{
		cout << "Person2 ���޲ι��캯������" << endl;
	}
	Person2(int a)
	{
		cout << "Person2 ���вι��캯������" << endl;
	}

	~Person2()
	{
		cout << "Person2 ��������������" << endl;
	}
	// �������캯��
	Person2(const Person2& p)
	{
		// ������������ϵ��������ԣ�������������
		age = p.age;
		cout << "Person2 �Ŀ������캯������" << endl;
	}
	int age;
};

// ����
void test201()
{
	// 1. ���ŷ�
	// Person2 p1; // Ĭ�Ϲ��캯������
	// Person2 p2(77); // �вι��캯��
	// Person2 p3(p2); // �������캯��
	// ע������
	// ����Ĭ�Ϲ��캯����ʱ�򣬲�Ҫ��()
	// ��Ϊ�������д��룬����������Ϊ��һ��������������������Ϊ�ڴ�������
	// Person2 p1();

	// cout << "p2 ������Ϊ��" << p2.age << endl;
	// cout << "p3 ������Ϊ��" << p3.age << endl;
	// 2. ��ʾ��
	// Person p1;
	// Person p2 = Person(10); // �вι���

	// Person p3 = Person(p2); // ��������

	// Person(10); // ���������ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������
	// cout<<"a"<<endl;

	// ע������ 2
	// ��Ҫ���ÿ���������ʼ���������󣬱���������Ϊ Person(p3) === Person p3; ��������
	Person2(10);

	// 3. ��ʽת����
	Person2 p4 = 10; // �൱��д�� Person p4 = Person(10); �вι���
	Person2 p5 = p4;
}
int main2()
{
	test201();

	system("pause");

	return 0;
}