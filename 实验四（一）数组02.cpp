#include <iostream>
using namespace std;

int main()
{
	const int listSize = 10;
	double list[listSize];
	cout << "请输入十个数：" << endl;
	for (int i = 0; i < 10; i++)
	cin >>list[i];

	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < (listSize-1); j++)
			if (list[j] > list[j + 1])
			{
				swap (list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);

	cout << "这十个数从小到大排列为：";
	for (int i = 0; i < 10; i++)
	cout << list[i]<<" ";
}
