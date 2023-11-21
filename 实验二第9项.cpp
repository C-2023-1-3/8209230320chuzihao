#include<iostream>
using namespace std;

int main()
{
	double a = 0, b = 0;
	for(int i=2;i<=100;i*=2)
	{ 
		a = a + i * 0.8;
		b++;
	}
	cout << "买苹果每天平均花钱：" << a / b;
	return 0;
}	