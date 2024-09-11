#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// 常用查找算法 binary_search
void test601()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back(i);
	// v.push_back(2); // 如果是无序序列，结果未知！
	// 查找容器中是否有9元素
	// 注意：容器必须是有序的序列
	bool ret = binary_search(v.begin(), v.end(), 9);

	if (ret)
		cout << "找到了元素" << endl;
	else
		cout << "未找到" << endl;
}
int main6()
{
	test601();

	system("pause");

	return 0;
}