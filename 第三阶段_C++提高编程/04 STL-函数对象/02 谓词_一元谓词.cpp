#include <iostream>
using namespace std;
#include <vector>

// 仿函数返回值类型是 bool 数据类型，称为谓词
// 一元谓词

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

	// 查找容器中有没有大于 5 的数字
	// GreaterFive() 匿名函数对象
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end())
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout << "找到大于 5 的数字为：" << *it << endl;
	}
	system("pause");
	return 0;
}