#include <iostream>
using namespace std;
#include <vector>

// �º�������ֵ������ bool �������ͣ���Ϊν��
// һԪν��

class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

int main2()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	// ������������û�д��� 5 ������
	// GreaterFive() ������������
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end())
	{
		cout << "δ�ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ����� 5 ������Ϊ��" << *it << endl;
	}
	system("pause");
	return 0;
}