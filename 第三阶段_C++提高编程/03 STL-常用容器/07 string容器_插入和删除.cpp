#include <iostream>
using namespace std;

// �ַ��������ɾ��
void test701()
{
	string str = "hello";

	// ����
	str.insert(1, "111");
	// h111ello
	cout << "str = " << str << endl;

	// ɾ��
	str.erase(1, 3);
	cout << "str = " << str << endl;
}
int main7()
{
	test701();
	system("pause");
	return 0;
}