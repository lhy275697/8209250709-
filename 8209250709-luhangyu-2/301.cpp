#include<iostream>
using namespace std;
int gcd(int &m, int &n)
{
	int g=0; int gcd1;

	if (m < n)
	{
		g = m; m = n; n= g;
	}

	while (n != 0)
	{
		g = m % n;
		m = n;
		n = g;

	}
	 gcd1 = m;
	
	return gcd1;
}
int icm(int& m, int& n)
{
	return	(m * n) / gcd(m, n);
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