// 

#include <iostream>
using namespace std;
int main()
{
    int a, b,c;
    cin >> a >> b;
    if (b <= a / 2 && b>a/10) {
        cout << 2;
    }
    if (b <= a / 10) {
        cout << 1;
    }
    if (b > a / 2 && b <= a / 4 * 3-4) {
        cout << 3;
    }
    if (b > a / 4 * 3 - 4 && b < a / 10 * 8 + 5) {
        cout << 4;
    }
    if (b >= a / 10 * 8 + 5) {
        cout << 5;
    }
}

