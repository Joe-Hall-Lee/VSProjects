#include <iostream>
using namespace std;
// 空指针调用成员函数
class Person3
{
public:
	void showClassName()
	{
		cout << "this is Person3 Class" << endl;
	}
	void showPersonAge()
	{
		// 报错原因时传入指针为 NULL
		if (this == NULL)
		{
			return;
		}
		cout << "age=" << this->m_Age << endl;
	}
	int m_Age;
};

void test301()
{
	Person3* p = NULL;
	p->showClassName();

	p->showPersonAge();
}
int main3()
{
	test301();
	system("pause");

	return 0;
}