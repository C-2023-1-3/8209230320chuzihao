#include<iostream>
using namespace std;

class point 
{
public:
	int x;
	int y;

	void display() 
	{
		cout << "x，y的值分别为" << x << "，" << y << endl;
	}

	void setpoint(int i,int j)
	{
		x =x+ i;
		y += j;
	}
};

int main()
{
	point point1{60,80 };
	point1.setpoint(2,3);
	point1.display();
}