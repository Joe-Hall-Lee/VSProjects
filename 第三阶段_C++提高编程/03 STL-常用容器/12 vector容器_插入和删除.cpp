#include <iostream>
using namespace std;
#include <vector>

// vector 插入和删除
/*
* push_back(ele);  // 尾部插入元素 ele
* pop_back();  // 删除最后一个元素
* insert(const_iterator pos, ele);  // 迭代器指向位置 pos 插入元素 ele
* insert(const_iterator pos, int count, ele);  // 迭代器指向位置 pos 插入 count 个元素 ele
* erase(const_iterator pos);  // 删除迭代器指向的元素
* erase(const_iterator start, const_iterator end);  // 删除迭代器从 start 到 end 之间的元素
* clear();  // 删除容器中所有元素
*/

void printVector12(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test1201()
{
	vector<int> v1;
	// 尾插
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	v1.push_back(10);
	v1.push_back(10);
	v1.push_back(10);

	// 遍历
	printVector12(v1);

	// 尾删
	v1.pop_back();
	printVector12(v1);

	// 插入，第一个参数是迭代器
	v1.insert(v1.begin(), 100);
	printVector12(v1);

	v1.insert(v1.begin(), 2, 100);
	printVector12(v1);

	// 删除，参数也是迭代器
	v1.erase(v1.begin());
	printVector12(v1);

	// 清空
	// v1.erase(v1.begin(), v1.end());
	v1.clear();
	printVector12(v1);
}
int main12()
{
	test1201();

	system("pause");

	return 0;
}