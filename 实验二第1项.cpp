#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    if (c >= 'a' && c <= 'z') {         // 判断是否为小写字母
        c -= 'a' - 'A';                 // 转换为大写字母
        cout << c << endl;
    } else {
        cout << int(c) + 1 << endl;     // 输出后继字符的ASCII码值
    }
    return 0;
}