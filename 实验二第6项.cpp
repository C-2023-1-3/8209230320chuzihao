#include <iostream>
using namespace std;

int main() {
	int a, b , c=0 , d=0 ;
	cout << "请输入第一个正整数：";
	cin >> a;
	cout << "请输入第二个正整数：";
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

	cout << "这两个数的最大公约数为：" << c << endl;
	cout << "这两个数的最小公倍数为：" << d << endl;

	return 0;
}