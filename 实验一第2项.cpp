#include<iostream>
#define PI 3.14
using namespace std;

int main()
{
    int r, h;
    cout << "������Բ׶�ĵ���뾶��" ;
    cin >> r ;
    cout << "������Բ׶�ĸߣ�" ;
    cin >> h;
    cout << "���Բ׶�����Ϊ��" << PI * r * r * h/3 << endl;
    return 0;
}