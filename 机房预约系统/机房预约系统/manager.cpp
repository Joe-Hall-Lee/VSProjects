#include "manager.h"

// 默认构造
Manager::Manager()
{
}
// 有参构造
Manager::Manager(string name, string pwd)
{
	// 初始化管理员信息
	this->m_Name = name;
	this->m_Pwd = pwd;

	// 初始化容器，获取到所有文件中学生、老师信息
	this->initVector();

	// 初始化机房信息
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);

	ComputerRoom com;
	while (ifs >> com.m_ComId >> com.m_MaxNum)
	{
		vCom.push_back(com);
	}
	ifs.close();
	cout << "机房的数量为：" << vCom.size() << endl;
}
void Manager::operMenu()
{
	cout << "欢迎管理员 " << this->m_Name << " 登录！" << endl;
	cout << "1. 添加账号" << endl;
	cout << "2. 查看账号" << endl;
	cout << "3. 查看机房" << endl;
	cout << "4. 清空预约" << endl;
	cout << "0. 注销登录" << endl;
	cout << "请选择您的操作：" << endl;
}
// 添加账号
void Manager::addPerson()
{
	cout << "请输入添加账号类型" << endl;
	cout << "1. 添加学生" << endl;
	cout << "2. 添加老师" << endl;
	string fileName; // 操作文件名
	string tip; // 提示 id 号
	string errorTip; // 重复错误提示
	ofstream ofs; // 文件操作对象

	int select = 0;
	cin >> select; // 接受用户的选项
	if (select == 1)
	{
		// 添加的是学生
		fileName = STUDENT_FILE;
		tip = "请输入学号：";
		errorTip = "学号重复，请重新输入";
	}
	else
	{
		fileName = TEACHER_FILE;
		tip = "请输入职工编号：";
		errorTip = "职工号重复，请重新输入";
	}

	// 利用追加的方式写文件
	ofs.open(fileName, ios::out | ios::app);

	int id; // 学号/职工号
	string name; // 姓名
	string pwd; // 密码

	while (true)
	{
		cin >> id;
		bool ret = checkRepeat(id, select);
		if (ret) // 有重复
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

	cout << "请输入姓名：" << endl;
	cin >> name;
	cout << "请输入密码：" << endl;
	cin >> pwd;

	// 向文件中添加数据
	ofs << id << " " << name << " " << pwd << endl;
	cout << "添加成功" << endl;

	system("pause");
	system("cls");

	ofs.close();

	// 调用初始化容器接口，重新获取文件中的数据
	this->initVector();
}

void printStudent(Student& s)
{
	cout << "学号：" << s.m_Id << "\t姓名：" << s.m_Name << "\t密码：" << s.m_Pwd << endl;
}
void printTeacher(Teacher& t)
{
	cout << "职工号：" << t.m_EmpId << "\t姓名：" << t.m_Name << "\t密码：" << t.m_Pwd << endl;
}
// 查看账号
void Manager::showPerson()
{
	cout << "请选择查看内容：" << endl;
	cout << "1. 查看所有学生" << endl;
	cout << "2. 查看所有老师" << endl;

	int select = 0; // 接受用户选择
	cin >> select;
	if (select == 1)
	{
		// 查看学生
		if (vStu.size() == 0)
		{
			cout << "无学生信息" << endl;
		}
		else
		{
			cout << "所有学生信息如下：" << endl;
			for_each(vStu.begin(), vStu.end(), printStudent);
		}
	}
	else
	{
		// 查看老师
		if (vTea.size() == 0)
		{
			cout << "无老师信息" << endl;
		}
		else
		{
			cout << "所有老师信息如下：" << endl;
			for_each(vTea.begin(), vTea.end(), printTeacher);
		}
	}
}
// 查看机房信息
void Manager::showComputer()
{
	cout << "机房信息如下：" << endl;
	for (vector<ComputerRoom>::iterator it = vCom.begin(); it != vCom.end(); it++)
	{
		cout << "机房编号：" << it->m_ComId << "\t机房最大容量：" << it->m_MaxNum << endl;
	}
	system("pause");
	system("cls");
}
// 清空预约记录
void Manager::cleanFile()
{
	ofstream ofs(ORDER_FILE, ios::trunc);
	ofs.close();

	cout << "清空成功！" << endl;
	system("pause");
	system("cls");
}

// 初始化容器
void Manager::initVector()
{
	// 确保容器清空状态
	vStu.clear();
	vTea.clear();
	// 读取信息：学生、老师
	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件读取失败" << endl;
		return;
	}

	Student s;
	while (ifs >> s.m_Id >> s.m_Name >> s.m_Pwd)
	{
		vStu.push_back(s);
	}
	cout << "当前学生数量为：" << vStu.size() << endl;
	ifs.close();

	// 读取信息：老师
	ifs.open(TEACHER_FILE, ios::in);
	Teacher t;
	while (ifs >> t.m_EmpId >> t.m_Name >> t.m_Pwd)
	{
		vTea.push_back(t);
	}
	cout << "当前老师数量为：" << vTea.size() << endl;
	ifs.close();
}

// 检测重复
// 参数 1：检测学号/职工号
// 参数 2：检测类型
bool Manager::checkRepeat(int id, int type)
{
	if (type == 1)
	{
		// 检测学生
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
		// 检测老师
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