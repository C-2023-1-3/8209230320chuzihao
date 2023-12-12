#include <iostream>
using namespace std;

int gcd(int n1, int n2)
{
	int gc = 0;
	for (int i = 1; i <= n1 && i <= n2; i++)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			 gc = i;
		}
	}
	return gc;
}

int main()
{
	int n1, n2;
	cout << "请输入一个自然数m：";
	cin >> n1;
	cout << "请再输入一个自然数n：";
	cin >> n2;
    cout << "则它们的最大公约数是："<<gcd(n1,n2)<<endl;
}
