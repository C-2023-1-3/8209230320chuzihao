#include <iostream>
using namespace std;

int main() {

    double a, b, c;
    cout << "�����������εĵ�һ���߳���";
    cin >> a;
    cout << "�����������εĵڶ����߳���";
    cin >> b;
    cout << "�����������εĵ������߳���";
    cin >> c;
        
    if (a + b > c && a + c > b && b + c > a)                 // �ж��Ƿ��ܹ���������
    {               
        double C = a + b + c;                                // �����ܳ�

        if (a == b || a == c || b == c)                      // �ж��Ƿ�Ϊ����������
        {                   
            cout << "����һ�����������Σ��ܳ�Ϊ��" << C << endl;
        } 

        else 
        {
            cout << "�ⲻ��һ�����������Σ��ܳ�Ϊ��" << C << endl;
        }
    } 
    
    else 
    {
        cout << "�ⲻ��һ�������Σ�" << endl;
    }

    return 0;
}