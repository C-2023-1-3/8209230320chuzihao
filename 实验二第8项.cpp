#include <iostream>
#include<cmath>
using namespace std;

int main() {
	double a,b=0;
	cout << "请输入a的值：";
	cin >> a;
	for(double x=a; ; )
	{ 
		b = x;
		x =  (x + a / x)/2;
		if ( abs( b - x ) < 5 )
		{
			cout <<"求得平方根为"<< x << endl;
			return 0;
		}
	}

}