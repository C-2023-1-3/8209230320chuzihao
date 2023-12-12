#include<iostream>
using namespace std;

int main()
{
	for (int tao = 1,day = 1; day <= 10; day++)
	{
		tao=(tao + 1) * 2;
		if (day == 10) 
		{
			cout << "第一天猴子所摘桃子的数为" << tao << "个" << endl;
		}
	}
}