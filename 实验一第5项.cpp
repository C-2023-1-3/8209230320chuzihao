#include<iostream>
#include <iomanip>
using namespace std;

//ת����ʽ ���϶� = (���϶� - 32��F) �� 1.8
int main()
{
	double a, b;
	cout << "�����뻪���¶�ֵ��";
	cin >> a ;
	cout << "������������¶�ֵΪ��" << a << endl;
	b = (a - 32) / 1.8;
	cout << "ת��Ϊ�����¶�Ϊ��" << setprecision(2)<<fixed <<b <<endl;
	return 0;
}