#include<iostream>
#include"303 .h"
using namespace std;


int main() {
    double a, b, c;

    cout << "请输入三角形的三条边长：" << endl;


    cout << "边1: ";
    cin >> a;
    cout << "边2: ";
    cin >> b;
    cout << "边3: ";
    cin >> c;


    if (is_valid(a, b, c)) {

        double result = area(a, b, c);
        cout << "该三角形的面积为: " << result << endl;
    }
    else {

        cout << "错误：输入的三边长无法构成一个合法的三角形！" << endl;
        cout << "请确保所有边长为正数，且任意两边之和大于第三边。" << endl;
    }

    return 0;
}
