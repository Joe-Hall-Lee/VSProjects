#pragma once
#include <iostream>
using namespace std;

// 点类
class Point
{
public:
	// 设置 x
	void setX(int x);

	// 获取 x
	int getX();

	// 设置 y
	void setY(int y);

	// 获取 y
	int getY();

private:
	int m_X;
	int m_Y;
};
