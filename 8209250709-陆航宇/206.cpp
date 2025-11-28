#include<iostream>
using namespace std;
int main()
{
	int a; int b; int c, ya,yb;
	cout << "请输入两个正整数：";
	cin >> a >> b; ya = a; yb = b;


	if (a < b)
	{
		c = a; a = b; b = c;
	}
	
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
		
	}
	int gcd = a;
	int icm = (ya * yb) / gcd;

	cout << "最大公约数：" << gcd << endl;
	cout << "最小公倍数：" << icm << endl;
	
	return 0;
}