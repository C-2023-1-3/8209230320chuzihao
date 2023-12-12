#include<iostream>
using namespace std;

bool is_prime(int num)
{
	for (int i = 2; i<= num / 2; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	cout << "前两百个素数是："<<endl;
	for (int j = 2,s=0; s < 200; j++) 
	{
		if (is_prime(j)!=0) 
		{
			cout << j << "，";
			s++;
			if (s % 10 == 0) 
			{
				cout << endl;
			}
		}
	}
}