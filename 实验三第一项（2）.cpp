#include <iostream>
using namespace std;

int& gcd(int n1, int n2)
{
	static int gc = 0;
	for (int i = 1; i <= n1 && i <= n2; i++)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			gc = i;
		}
	}
	return gc;
}

int& lcm(int n1, int n2)
{
	static int lc = 0;
	for (int i = n1*n2; i >= n1 && i >= n2; i--)
	{
		if (i% n1  == 0 &&  i%n2  == 0)
		{
			lc = i;
		}
	}
	return lc;
}

int main()
{
	int n1, n2;
	cout << "请输入一个自然数m：";
	cin >> n1;
	cout << "请再输入一个自然数n：";
	cin >> n2;
	int& tgcd = gcd(n1, n2);
	int& tlcm = lcm(n1, n2);
	cout << "则它们的最大公约数是：" << tgcd << "，"<<"最小公倍数是："<<tlcm;
}
