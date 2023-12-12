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
	cout << "������һ����Ȼ��m��";
	cin >> n1;
	cout << "��������һ����Ȼ��n��";
	cin >> n2;
	int& tgcd = gcd(n1, n2);
	int& tlcm = lcm(n1, n2);
	cout << "�����ǵ����Լ���ǣ�" << tgcd << "��"<<"��С�������ǣ�"<<tlcm;
}
