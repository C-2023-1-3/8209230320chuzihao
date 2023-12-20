#include<iostream>
using namespace std;

class cuboid 
{
private:
	int length, width, height,V;

public:

	void set_cub() 
	{
		cout << "请输入长方体的长：";
		cin >> length;
		cout << "请输入长方体的宽：";
		cin >> width;
		cout << "请输入长方体的高：";
		cin >> height;

		V = length * width * height;
	}

	void show_cub() 
	{
		cout <<"则该长方体的体积为："<<V << endl;
	}
};

int main()
{
	cuboid cub1;
	cub1.set_cub();
	cub1.show_cub();

	cout << endl;

	cuboid cub2;
	cub2.set_cub();
	cub2.show_cub();

	cout << endl;

	cuboid cub3;
	cub3.set_cub();
	cub3.show_cub();
}