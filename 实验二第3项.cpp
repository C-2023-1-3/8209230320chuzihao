#include <iostream>
using namespace std;

int main() {

    double a, b, c;
    cout << "请输入三角形的第一条边长：";
    cin >> a;
    cout << "请输入三角形的第二条边长：";
    cin >> b;
    cout << "请输入三角形的第三条边长：";
    cin >> c;
        
    if (a + b > c && a + c > b && b + c > a)                 // 判断是否能构成三角形
    {               
        double C = a + b + c;                                // 计算周长

        if (a == b || a == c || b == c)                      // 判断是否为等腰三角形
        {                   
            cout << "这是一个等腰三角形，周长为：" << C << endl;
        } 

        else 
        {
            cout << "这不是一个等腰三角形，周长为：" << C << endl;
        }
    } 
    
    else 
    {
        cout << "这不是一个三角形！" << endl;
    }

    return 0;
}