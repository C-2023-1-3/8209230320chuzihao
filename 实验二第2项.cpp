#include <iostream>
using namespace std;

int main()
{
	double x,y=0;
	cout << "请输入x的值：";
	cin >> x;
	cout << "您输入的x的值为：" << x << endl;

	if (x > 0 && x < 1) {
		y = 3 - 2 * x;

	}

	else if (x >= 1 && x < 5) {
		y = 2 / (4 * x) + 1;
	}

	else if(x >= 5 && x < 10) {
		y = x * x;

	}
	cout << "则y的值为" << y << endl;
	
	return 0;
}