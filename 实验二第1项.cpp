#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    if (c >= 'a' && c <= 'z') {         // �ж��Ƿ�ΪСд��ĸ
        c -= 'a' - 'A';                 // ת��Ϊ��д��ĸ
        cout << c << endl;
    } else {
        cout << int(c) + 1 << endl;     // �������ַ���ASCII��ֵ
    }
    return 0;
}