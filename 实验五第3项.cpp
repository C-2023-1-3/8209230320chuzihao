#include<iostream>
using namespace std;

class cuboid 
{
private:
	int length, width, height,V;

public:

	void set_cub() 
	{
		cout << "�����볤����ĳ���";
		cin >> length;
		cout << "�����볤����Ŀ�";
		cin >> width;
		cout << "�����볤����ĸߣ�";
		cin >> height;

		V = length * width * height;
	}

	void show_cub() 
	{
		cout <<"��ó���������Ϊ��"<<V << endl;
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