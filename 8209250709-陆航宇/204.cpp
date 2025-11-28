#include<iostream>
using namespace std;
int main()
{
	float a; float b; float c;
	char f;
	cout << "请输入：";
	cin >> a >> f >> b;
	switch (f)
	{
	case  '+':
	{
		c = a + b;
		cout << c << endl;

	}
	case '-':
	{
		c = a - b;
		cout << c << endl;
	}
	case '*':
	{
		c = a * b;
		cout << c << endl;
	}
	case '/':
	{
		if (b != 0)

		{
			c = a / b;
			cout << c << endl;
		}
		if (b == 0)
		{
			cout << "分母为零有误";
		}
	}
	case '%':
	{
		int m = static_cast<int>(b);
		int n = static_cast<int>(a);
		c = n % m;

	}break;
	}
defalt: cout << "运算符非法";
		
	
return 0;
	}
	