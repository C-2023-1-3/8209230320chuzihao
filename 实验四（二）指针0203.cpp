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
	cout << "�����������Ԫ�ظ���:";
	cin >> a;
	int* arr = new int[a];
	cout << "���������������Ԫ��:";
	for (int i = 0; i < a; i++)
	{
		cin >> *(arr + i);
	}
	cout << "����Ҫ�鿴�������еĵڼ���Ԫ�أ�";
	cin >> b;
	cout << "���Ԫ��Ϊ��";
	cout << arr[b - 1] << endl;
	fun(arr);
	cout << "�������е�����Ԫ������Ϊ��";
	for (int m = 0; m < a; m++)
	{
		cout << *(arr + m)<<",";
	}
	delete[]arr;
	return 0;
}