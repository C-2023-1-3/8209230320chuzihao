#include<iostream>
using namespace std;

int main()
{	cout << "int length:" << sizeof(int) << endl;	
	cout << "short length:" << sizeof(short) << endl;
	cout << "long length:" << sizeof(long) << endl;
	cout << "long long length:" << sizeof(long long) << endl;

	cout << "double length:" << sizeof(double) << endl;
	cout << "float length:" << sizeof(float) << endl;
	cout << "long double length:" << sizeof(long double) << endl;
	cout << "bool length:" << sizeof(bool) << endl;
	
	cout << "char length:" << sizeof(char) << endl;
	return 0;
}