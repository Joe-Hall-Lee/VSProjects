#include <iostream>
#include <ctime>
using namespace std;

int main9()
{
	// �����������ӣ����ã����õ�ǰϵͳʱ���������������ֹÿ���������һ��
	srand((unsigned int)time(NULL));

	// 1. ϵͳ���������
	int num = rand() % 100 + 1; // rand() % 100 + 1 ���� (0 + 1)~(99 + 1) �����
	// cout << num << endl;
	// 2. ��ҽ��в²�
	int val = 0; // ������������

	while (1)
	{
		cin >> val;

		// 3. �ж���ҵĲ²�

		// �´���ʾ�µĽ����������߹�С�����·��ص�2��
		if (val > num)
		{
			cout << "�²����" << endl;
		}
		else if (val < num)
		{
			cout << "�²��С" << endl;
		}
		else
		{
			cout << "��ϲ��˵����" << endl;
		}
	}

	// �¶ԣ��˳���Ϸ

	system("pause");

	return 0;
}