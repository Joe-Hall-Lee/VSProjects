#include <iostream>

using namespace std;
// 多态

// 动物类
class Animal1
{
public:
	// 虚函数
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};
// 猫类
class Cat1 :public Animal1
{
public:
	// 重写：函数返回值类型. 函数名. 参数列表完全相同
	virtual void speak()
	{
		cout << "小猫在说话" << endl;
	}
};
// 狗类
class Dog :public Animal1
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};
// 执行说话的函数
// 地址早绑定，在编译阶段确定函数地址
// 如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定

// 动态多态满足条件
// 1. 有继承关系
// 2. 子类重写父类的虚函数

// 动态多态使用
// 父态的指针或者引用执行子类对象
void doSpeak(Animal1& animal) // Animal &animal = cat;
{
	animal.speak();
}
void test101()
{
	Cat1 cat;
	doSpeak(cat);
	Dog dog;
	doSpeak(dog);
}
void test102()
{
	cout << "size of Animal=" << sizeof(Animal1) << endl;
}
int main1()
{
	// test101();
	test102();
	system("pause");
	return 0;
}