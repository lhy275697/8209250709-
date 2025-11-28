#include<iostream>
using namespace std;
int main()
{
	const double pi = 3.1415926;
	double r; double h; double v;
	cout << "请输入圆锥的底半径和锥高：";
	cin >> r >> h;
	v = 1.0 / 3 * pi * r * r * h;
	cout << "圆锥的体积为：" << v << endl;
	return 0;
}