#include <iostream>
#include<cmath>
using namespace std;

int main() {
	double a,b=0;
	cout << "������a��ֵ��";
	cin >> a;
	for(double x=a; ; )
	{ 
		b = x;
		x =  (x + a / x)/2;
		if ( abs( b - x ) < 5 )
		{
			cout <<"���ƽ����Ϊ"<< x << endl;
			return 0;
		}
	}

}