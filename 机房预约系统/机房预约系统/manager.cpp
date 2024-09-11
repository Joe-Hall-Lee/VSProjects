#include "manager.h"

// Ĭ�Ϲ���
Manager::Manager()
{
}
// �вι���
Manager::Manager(string name, string pwd)
{
	// ��ʼ������Ա��Ϣ
	this->m_Name = name;
	this->m_Pwd = pwd;

	// ��ʼ����������ȡ�������ļ���ѧ������ʦ��Ϣ
	this->initVector();

	// ��ʼ��������Ϣ
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);

	ComputerRoom com;
	while (ifs >> com.m_ComId >> com.m_MaxNum)
	{
		vCom.push_back(com);
	}
	ifs.close();
	cout << "����������Ϊ��" << vCom.size() << endl;
}
void Manager::operMenu()
{
	cout << "��ӭ����Ա " << this->m_Name << " ��¼��" << endl;
	cout << "1. ����˺�" << endl;
	cout << "2. �鿴�˺�" << endl;
	cout << "3. �鿴����" << endl;
	cout << "4. ���ԤԼ" << endl;
	cout << "0. ע����¼" << endl;
	cout << "��ѡ�����Ĳ�����" << endl;
}
// ����˺�
void Manager::addPerson()
{
	cout << "����������˺�����" << endl;
	cout << "1. ���ѧ��" << endl;
	cout << "2. �����ʦ" << endl;
	string fileName; // �����ļ���
	string tip; // ��ʾ id ��
	string errorTip; // �ظ�������ʾ
	ofstream ofs; // �ļ���������

	int select = 0;
	cin >> select; // �����û���ѡ��
	if (select == 1)
	{
		// ��ӵ���ѧ��
		fileName = STUDENT_FILE;
		tip = "������ѧ�ţ�";
		errorTip = "ѧ���ظ�������������";
	}
	else
	{
		fileName = TEACHER_FILE;
		tip = "������ְ����ţ�";
		errorTip = "ְ�����ظ�������������";
	}

	// ����׷�ӵķ�ʽд�ļ�
	ofs.open(fileName, ios::out | ios::app);

	int id; // ѧ��/ְ����
	string name; // ����
	string pwd; // ����

	while (true)
	{
		cin >> id;
		bool ret = checkRepeat(id, select);
		if (ret) // ���ظ�
		{
			cout << errorTip << endl;
		}
		else
		{
			break;
		}
	}
	cout << tip << endl;
	cin >> id;

	cout << "������������" << endl;
	cin >> name;
	cout << "���������룺" << endl;
	cin >> pwd;

	// ���ļ����������
	ofs << id << " " << name << " " << pwd << endl;
	cout << "��ӳɹ�" << endl;

	system("pause");
	system("cls");

	ofs.close();

	// ���ó�ʼ�������ӿڣ����»�ȡ�ļ��е�����
	this->initVector();
}

void printStudent(Student& s)
{
	cout << "ѧ�ţ�" << s.m_Id << "\t������" << s.m_Name << "\t���룺" << s.m_Pwd << endl;
}
void printTeacher(Teacher& t)
{
	cout << "ְ���ţ�" << t.m_EmpId << "\t������" << t.m_Name << "\t���룺" << t.m_Pwd << endl;
}
// �鿴�˺�
void Manager::showPerson()
{
	cout << "��ѡ��鿴���ݣ�" << endl;
	cout << "1. �鿴����ѧ��" << endl;
	cout << "2. �鿴������ʦ" << endl;

	int select = 0; // �����û�ѡ��
	cin >> select;
	if (select == 1)
	{
		// �鿴ѧ��
		if (vStu.size() == 0)
		{
			cout << "��ѧ����Ϣ" << endl;
		}
		else
		{
			cout << "����ѧ����Ϣ���£�" << endl;
			for_each(vStu.begin(), vStu.end(), printStudent);
		}
	}
	else
	{
		// �鿴��ʦ
		if (vTea.size() == 0)
		{
			cout << "����ʦ��Ϣ" << endl;
		}
		else
		{
			cout << "������ʦ��Ϣ���£�" << endl;
			for_each(vTea.begin(), vTea.end(), printTeacher);
		}
	}
}
// �鿴������Ϣ
void Manager::showComputer()
{
	cout << "������Ϣ���£�" << endl;
	for (vector<ComputerRoom>::iterator it = vCom.begin(); it != vCom.end(); it++)
	{
		cout << "������ţ�" << it->m_ComId << "\t�������������" << it->m_MaxNum << endl;
	}
	system("pause");
	system("cls");
}
// ���ԤԼ��¼
void Manager::cleanFile()
{
	ofstream ofs(ORDER_FILE, ios::trunc);
	ofs.close();

	cout << "��ճɹ���" << endl;
	system("pause");
	system("cls");
}

// ��ʼ������
void Manager::initVector()
{
	// ȷ���������״̬
	vStu.clear();
	vTea.clear();
	// ��ȡ��Ϣ��ѧ������ʦ
	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ȡʧ��" << endl;
		return;
	}

	Student s;
	while (ifs >> s.m_Id >> s.m_Name >> s.m_Pwd)
	{
		vStu.push_back(s);
	}
	cout << "��ǰѧ������Ϊ��" << vStu.size() << endl;
	ifs.close();

	// ��ȡ��Ϣ����ʦ
	ifs.open(TEACHER_FILE, ios::in);
	Teacher t;
	while (ifs >> t.m_EmpId >> t.m_Name >> t.m_Pwd)
	{
		vTea.push_back(t);
	}
	cout << "��ǰ��ʦ����Ϊ��" << vTea.size() << endl;
	ifs.close();
}

// ����ظ�
// ���� 1�����ѧ��/ְ����
// ���� 2���������
bool Manager::checkRepeat(int id, int type)
{
	if (type == 1)
	{
		// ���ѧ��
		for (vector<Student>::iterator it = vStu.begin(); it != vStu.end(); it++)
		{
			if (it->m_Id == id)
			{
				return true;
			}
		}
	}
	else
	{
		// �����ʦ
		for (vector<Teacher>::iterator it = vTea.begin(); it != vTea.end(); it++)
		{
			if (it->m_EmpId == id)
			{
				return true;
			}
		}
	}
	return false;
}