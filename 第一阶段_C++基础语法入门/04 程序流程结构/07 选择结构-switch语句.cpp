#include<iostream>
using namespace std;

int main7()
{
	// switch ���
	// ��������д��
	// 10~9: ����
	// 8~7: �ǳ���
	// 6~5: һ��
	// 5 ����: ����

	// 1. ��ʾ�û���������
	cout << "������顶ˮ�ȫ����SK)�����д��" << endl;
	// 2. �û���ʼ���д��
	int score = 0;
	cin >> score;
	cout << "����ķ���Ϊ��" << score << endl;
	// 3. �����û�����ķ�������ʾ�û����Ľ��

	switch (score)
	{
	case 10:
		cout << "����Ϊ��ˮ�ȫ����SK)���Ǿ�������" << endl;
		break; //�˳���ǰ��֧
	case 9:
		cout << "����Ϊ��ˮ�ȫ����SK)���Ǿ�������" << endl;
		break;
	case 8:
		cout << "����Ϊ��ˮ�ȫ����SK)���ǳ���" << endl;
		break;
	case 7:
		cout << "����Ϊ��ˮ�ȫ����SK)���ǳ���" << endl;
		break;
	case 6:
		cout << "����Ϊ��ˮ�ȫ����SK)��һ��" << endl;
		break;
	case 5:
		cout << "����Ϊ��ˮ�ȫ����SK)��һ��" << endl;
		break;
	default:
		cout << "����Ϊ��ˮ�ȫ����SK)��������" << endl;
		break;
	}

	// if �� switch ����
	// switch ȱ�㣬�ж�ʱ��ֻ�������ͻ��ַ��ͣ���������һ������
	// switch �ŵ㣬�ṹ������ִ��Ч�ʸ�

	system("pause");

	return 0;
}