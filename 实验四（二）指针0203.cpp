#include<iostream>
using namespace std;

int a;
void fun(int s[])
{
	for (int k = 0; k < a; k++)
	{
		for (int h = 0; h < a; h++)
		{
			if (s[k] < s[h])
			{
				int t;
				t = s[h];
				s[h] = s[k];
				s[k] = t;
			}
		}
	}
}

int main()
{
	int b;
	cout << "请输入数组的元素个数:";
	cin >> a;
	int* arr = new int[a];
	cout << "请依次输入数组各元素:";
	for (int i = 0; i < a; i++)
	{
		cin >> *(arr + i);
	}
	cout << "你想要查看该数组中的第几个元素：";
	cin >> b;
	cout << "则该元素为：";
	cout << arr[b - 1] << endl;
	fun(arr);
	cout << "该数组中的所有元素依次为：";
	for (int m = 0; m < a; m++)
	{
		cout << *(arr + m)<<",";
	}
	delete[]arr;
	return 0;
}