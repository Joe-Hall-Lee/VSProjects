#include <iostream>

using namespace std;
// 普通实现页面
// // Java 页面
// class Java
// {
// public:
//     void header()
//     {
//         cout<<"首页、公开课、登录、注册……（公共头部）"<<endl;
//     }
//    void footer()
//    {
//        cout<<"帮助中心、交流合作、站内地图……（公共底部）"<<endl;
//    }
//    void left()
//    {
//        cout<<"Java、Python、C++……（公共分类列表）"<<endl;
//    }
//    void content()
//    {
//        cout<<"Java 学科视频"<<endl;
//    }
// };
// // Python 页面
// class Python
// {
// public:
//     void header()
//     {
//         cout<<"首页、公开课、登录、注册……（公共头部）"<<endl;
//     }
//     void footer()
//     {
//         cout<<"帮助中心、交流合作、站内地图……（公共底部）"<<endl;
//     }
//     void left()
//     {
//         cout<<"Java、Python、C++……（公共分类列表）"<<endl;
//     }
//     void content()
//     {
//         cout<<"Python 学科视频"<<endl;
//     }
// };
// // C++ 页面
// class CPP
// {
// public:
//     void header()
//     {
//         cout<<"首页、公开课、登录、注册……（公共头部）"<<endl;
//     }
//     void footer()
//     {
//         cout<<"帮助中心、交流合作、站内地图……（公共底部）"<<endl;
//     }
//     void left()
//     {
//          cout<<"Java、Python、C++……（公共分类列表）"<<endl;
//     }
//     void content()
//     {
//         cout<<"C++ 学科视频"<<endl;
//     }
// };
// 继承实现页面
// 公共页面类
class BasePage
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册……（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图……（公共底部）" << endl;
	}
	void left()
	{
		cout << "Java、Python、C++……（公共分类列表）" << endl;
	}
};
// 继承的好处：减少重复代码
// 语法：class 子类：继承方式 父类
// 子类也称为派生类
// 父类也称为基类

// Java 页面
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Java 学科视频" << endl;
	}
};
// Python 页面
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Python 学科视频" << endl;
	}
};
// C++ 页面
class CPP :public BasePage
{
public:
	void content()
	{
		cout << "C++ 学科视频" << endl;
	}
};
void test101()
{
	cout << "Java 下载视频页面如下：" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "---------------------------------" << endl;
	cout << "Python下载视频页面如下：" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "---------------------------------" << endl;
	cout << "C++ 下载视频页面如下：" << endl;
	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}

int main1()
{
	test101();
	system("pause");
	return 0;
}