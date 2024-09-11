#include <iostream>
using namespace std;
#include <list>

// lisr ���������ɾ��

/*
	- push_back(elem); // ������β������һ��Ԫ��
	- pop_back(); // ɾ�����������һ��Ԫ��
	- push_front(elem); // ��������ͷ����һ��Ԫ��
	- pop_front(); // ��������ͷ�Ƴ�һ�� Ԫ��
	- insert(pos, elem); // �� pos λ�ò� elem Ԫ�صĿ��������������ݵ�λ�á�
	- insert(pos, n, elem); // �� pos λ�ò��� n �� elem ���ݣ��޷���ֵ��
	- insert(pos, beg, end); // �� pos λ�ò��� [beg, end) ��������ݣ��޷���ֵ��
	- clear(); // �Ƴ������е���������
	- erase(beg, end); // ɾ�� [beg, end) ��������ݣ�������һ�����ݵ�λ�á�
	- remove(elem); // ɾ�������������� elem ֵƥ���Ԫ�ء�
*/

void printList28(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test2801()
{
	list<int>L;

	// β��
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);

	// ͷ��
	L.push_front(100);
	L.push_front(200);
	L.push_front(300);

	// 300 200 100 10 20 30
	printList28(L);

	// βɾ
	L.pop_back();
	// 300 200 100 10 20
	printList28(L);

	// ͷɾ
	L.pop_front();
	// 200 100 10 20
	printList28(L);

	// insert ����
	list<int>::iterator it = L.begin();
	L.insert(++it, 1000);
	// 200 1000 100 10 20
	printList28(L);

	// ɾ��
	it = L.begin();
	L.erase(++it);
	// 200 100 10 20
	printList28(L);

	// �Ƴ�
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	L.remove(10000);
	printList28(L);
	L.remove(10000);
	printList28(L);

	// ���
	L.clear();
	printList28(L);
}

int main28()
{
	test2801();
	system("pause");
	return 0;
}