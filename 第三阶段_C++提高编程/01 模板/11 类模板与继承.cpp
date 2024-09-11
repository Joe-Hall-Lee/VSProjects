#include <iostream>
using namespace std;

// 类模板与继承

template <class T>
class Base
{
	T m;
};

// class Son : public Base // 错误，必须要知道父类中的 T 类型，才能继承给子类
class Son : public Base<int>
{
};

void test1101()
{
	Son s1;
}

// 如果想灵活指定父类中 T 类型，子类也需要变类模板
template <class T1, class T2>
class Son2 : public Base<T2>
{
public:
	Son2()
	{
		cout << "T1 的类型为：" << typeid(T1).name() << endl;
		cout << "T2 的类型为：" << typeid(T2).name() << endl;
	}
	T1 obj;
};

void test1102()
{
	Son2<int, char> S2;
}

int main11()
{
	// test1101();
	test1102();

	system("pause");

	return 0;
}