#include <iostream>
using namespace std;
// 实现通用对数组进行排序的函数
// 规则：从大到小
// 算法：选择
// 测试：char 数组、int 数组 void
// 交换函数模板
template <class T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

// 排序算法
template <class T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i; // 认定最大值的下标
		for (int j = i + 1; j < len; j++)
		{
			// 认定的最大值比遍历出的数值要小，说明 j 下标的元素才是真正的最大值
			if (arr[max] < arr[j])
			{
				max = j; // 更新最大值下标
			}
		}
		if (max != i)
		{
			// 交换max和i元素
			mySwap(arr[max], arr[i]);
		}
	}
}

// 提供打印数组模板
template <class T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void test301()
{
	// 测试char数组
	char charArr[] = "bacdfe";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArray(charArr, num);
}
void test302()
{
	// 测试int数组
	int intArr[] = { 7, 5, 1, 3, 9, 2, 4, 6, 8 };
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);
	printArray(intArr, num);
}
int main3()
{
	// test301();
	test302();
	system("pause");
	return 0;
}