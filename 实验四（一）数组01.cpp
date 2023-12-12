#include<iostream>
using namespace std;

int main()
{
	const int n = 10;
	int a[n];
	cout << "请输入十个数字: " << endl;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout <<"其中不同的数有："<< a[0] << " ";
	for (int m = 1; m < n; m++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[m] != a[j])
			{
				if (j == m - 1)
					cout <<a[m] << " ";
				else
					continue;
			}
			else
				break;
		}
	}

	cout << endl;

	return 0;
}