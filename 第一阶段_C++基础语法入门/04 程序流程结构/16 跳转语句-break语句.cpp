#include<iostream>
using namespace std;

int main16()
{
	// break ��ʹ��ʱ��

	// 1. ������ switch �����

	// cout << "��ѡ��������������" << endl;
	// cout << "1. ��Ϸ˵����Ե֮���ϴ��ɴ���SK����" << endl;
	// cout << "2. �������й�־��SK)��" << endl;
	// cout << "3. ��ˮ�ȫ��(SK)��" << endl;

	// int select = 0; // ����ѡ�����ı���

	// cin >> select; // �ȴ��û�����

	// switch (select)
	// {
	// case 1:
	//     cout << "������������Ϸ˵����Ե֮���ϴ��ɴ���SK������" << endl;
	//	   break; // �˳�switch���
	// case 2:
	//	   cout << "�����������������й�־(SK)����" << endl;
	//	   break;
	// case 3:
	//	   cout << "������������ˮ�ȫ����SK����" << endl;
	//	   break;
	// default:
	//	   break;
	// }
	// 2. ������ѭ�������
	// for (int i = 0; i < 10; i++)
	// {
	//     // ���i����5���˳�ѭ�������ٴ�ӡ
	// 	   if (i == 5)
	// 	   {
	// 		   break; // �˳�ѭ��
	//     }
	// }

	// 3. ������Ƕ��ѭ�������

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break; // �˳��ڲ�ѭ��
			}
			cout << "--<-<-<@" << "   ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}