#include<iostream>
using namespace std;

int main()
{
	for (int tao = 1,day = 1; day <= 10; day++)
	{
		tao=(tao + 1) * 2;
		if (day == 10) 
		{
			cout << "��һ�������ժ���ӵ���Ϊ" << tao << "��" << endl;
		}
	}
}