#include <iostream>
using namespace std;

// string �Ӵ�

void test801()
{
	string str = "abcdef";

	string subStr = str.substr(1, 3);

	cout << "subStr = " << subStr << endl;
}

// ʹ�ò���
void test802()
{
	string email = "zhangsan@sina.com";

	// ���ʼ���ַ�л�ȡ�û�����Ϣ
	int pos = email.find("@");  // 8
	cout << pos << endl;

	string userName = email.substr(0, pos);
	cout << userName << endl;
}
int main8()
{
	// test801();

	test802();

	system("pause");

	return 0;
}