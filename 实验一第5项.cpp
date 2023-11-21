#include<iostream>
#include <iomanip>
using namespace std;

//转换公式 摄氏度 = (华氏度 - 32°F) ÷ 1.8
int main()
{
	double a, b;
	cout << "请输入华氏温度值：";
	cin >> a ;
	cout << "您输入的摄氏温度值为：" << a << endl;
	b = (a - 32) / 1.8;
	cout << "转换为摄氏温度为：" << setprecision(2)<<fixed <<b <<endl;
	return 0;
}