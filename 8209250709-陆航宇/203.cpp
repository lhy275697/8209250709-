#include<iostream>
using namespace std;
int main()
{
	float a; float b; float c;
	cin >> a >> b >> c;
	if (a + b > c)
	{
		int cir = a + b + c;
		cout << "周长为：" << cir << endl;;
		if (a == b || a == c || b == c) cout << "是等腰三角形";

	}
	else cout << "不是三角形";
	return 0;
}