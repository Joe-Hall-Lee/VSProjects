#include <iostream>

using namespace std;
// ��ͨʵ��ҳ��
// // Java ҳ��
// class Java
// {
// public:
//     void header()
//     {
//         cout<<"��ҳ�������Ρ���¼��ע�ᡭ��������ͷ����"<<endl;
//     }
//    void footer()
//    {
//        cout<<"�������ġ�����������վ�ڵ�ͼ�����������ײ���"<<endl;
//    }
//    void left()
//    {
//        cout<<"Java��Python��C++���������������б�"<<endl;
//    }
//    void content()
//    {
//        cout<<"Java ѧ����Ƶ"<<endl;
//    }
// };
// // Python ҳ��
// class Python
// {
// public:
//     void header()
//     {
//         cout<<"��ҳ�������Ρ���¼��ע�ᡭ��������ͷ����"<<endl;
//     }
//     void footer()
//     {
//         cout<<"�������ġ�����������վ�ڵ�ͼ�����������ײ���"<<endl;
//     }
//     void left()
//     {
//         cout<<"Java��Python��C++���������������б�"<<endl;
//     }
//     void content()
//     {
//         cout<<"Python ѧ����Ƶ"<<endl;
//     }
// };
// // C++ ҳ��
// class CPP
// {
// public:
//     void header()
//     {
//         cout<<"��ҳ�������Ρ���¼��ע�ᡭ��������ͷ����"<<endl;
//     }
//     void footer()
//     {
//         cout<<"�������ġ�����������վ�ڵ�ͼ�����������ײ���"<<endl;
//     }
//     void left()
//     {
//          cout<<"Java��Python��C++���������������б�"<<endl;
//     }
//     void content()
//     {
//         cout<<"C++ ѧ����Ƶ"<<endl;
//     }
// };
// �̳�ʵ��ҳ��
// ����ҳ����
class BasePage
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע�ᡭ��������ͷ����" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ�����������ײ���" << endl;
	}
	void left()
	{
		cout << "Java��Python��C++���������������б�" << endl;
	}
};
// �̳еĺô��������ظ�����
// �﷨��class ���ࣺ�̳з�ʽ ����
// ����Ҳ��Ϊ������
// ����Ҳ��Ϊ����

// Java ҳ��
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Java ѧ����Ƶ" << endl;
	}
};
// Python ҳ��
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Python ѧ����Ƶ" << endl;
	}
};
// C++ ҳ��
class CPP :public BasePage
{
public:
	void content()
	{
		cout << "C++ ѧ����Ƶ" << endl;
	}
};
void test101()
{
	cout << "Java ������Ƶҳ�����£�" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "---------------------------------" << endl;
	cout << "Python������Ƶҳ�����£�" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "---------------------------------" << endl;
	cout << "C++ ������Ƶҳ�����£�" << endl;
	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}

int main1()
{
	test101();
	system("pause");
	return 0;
}