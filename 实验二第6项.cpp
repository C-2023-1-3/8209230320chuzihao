#include <iostream>
using namespace std;

int main() {
	int a, b , c=0 , d=0 ;
	cout << "�������һ����������";
	cin >> a;
	cout << "������ڶ�����������";
	cin >> b;

	for (int i = 1; i <= a && i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			c = i;
		}
	}

	for ( int j = a*b; j >= a && j >= b; j--)
	{
		if (j % a == 0 && j % b == 0)
		{
			d = j;
		}
	}

	cout << "�������������Լ��Ϊ��" << c << endl;
	cout << "������������С������Ϊ��" << d << endl;

	return 0;
}