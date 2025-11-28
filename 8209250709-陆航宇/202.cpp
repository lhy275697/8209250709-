#include<iostream>
using namespace std;
int main()
{
	double x; double y;
	cin >> x;

	if (0 < x &&x<1)
	{ y = 3.0 - 2.0 * x; cout << y << endl; }
	else if (x >= 1 && 5 > x)
	{ y = 2.0 / (4.0 * x) + 1;  cout << y << endl; }
	else if (5 <= x && x < 10)
	{ y = x * x;  cout << y << endl; }
	else cout << "不在定义域内";
	

	return 0;
}