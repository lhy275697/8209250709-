
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, xn, xn1;
    cout << "请输入a：";
    cin >> a;

    if (a < 0) {
        cout << "平方根为虚数：" << sqrt(-a) << "i" << endl;
        return 0;
    }

    xn = a; 
    do {
        xn1 = 0.5 * (xn + a / xn);
        xn = xn1;
    } while (fabs(xn1 * xn1 - a) > 1e-5);  
    cout << "a的平方根为：" << xn1 << endl;
    return 0;
}
