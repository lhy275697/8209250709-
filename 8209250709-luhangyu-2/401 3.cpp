#include<iostream>
using namespace std;
int main()
{
	bool arr[100] = { 0 };
	const int max = 100;
	for (int i = 1; i <= 100; i++)
	{
		for (int num = i-1; num <max;num+=i)
		{
			arr[num] = !arr[num];
		}
	}
	cout << "开着的柜子： " << endl;
	for (int i = 0; i < 100; i++)
	{
		if (arr[i]) cout << i + 1 << "  ";
	}
	return 0;
}