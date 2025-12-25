#include<iostream>
using namespace std;
int gcd(int &m, int &n)
{
	int g = 0; int gcd1; int a = m; int b = n;

	if (a < b)
	{
		g = a; a = b; b= g;
	}

	while (b!= 0)
	{
		g = a % b;
		a = b;
		b = g;

	}
	 gcd1 = a;
	
	return gcd1;
}
int icm(int &m, int &n)
{
	int t = (m * n) / gcd(m, n);
	return  t	;
}
int main()
{
	int m, n;
	cout << "请输入数字" << endl;
	cin >> m >> n;
	cout << "最大公因数为： " << gcd(m, n) << endl;
	cout << "最小公倍数为： " << icm(m, n) << endl;
	return 0;
}
