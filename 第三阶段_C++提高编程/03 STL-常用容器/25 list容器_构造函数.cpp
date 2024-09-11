#include <iostream>
using namespace std;
#include <list>

// list �������캯��
void printList25(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test2501()
{
	// ���� list ����
	list<int> L1; // Ĭ�Ϲ���

	// �������
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	// ��������
	printList25(L1);

	// ���䷽ʽ����
	list<int> L2(L1.begin(), L1.end());
	printList25(L2);

	// ��������
	list<int> L3(L2);
	printList25(L3);

	// n �� elem
	list<int> L4(10, 1000);
	printList25(L4);
}

int main25()
{
	test2501();
	system("pause");
	return 0;
}