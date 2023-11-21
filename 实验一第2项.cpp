#include<iostream>
#define PI 3.14
using namespace std;

int main()
{
    int r, h;
    cout << "请输入圆锥的底面半径：" ;
    cin >> r ;
    cout << "请输入圆锥的高：" ;
    cin >> h;
    cout << "则此圆锥的体积为：" << PI * r * r * h/3 << endl;
    return 0;
}