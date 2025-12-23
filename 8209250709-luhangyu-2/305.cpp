#include<iostream>
using namespace std;
int main()
{
	for (float a = 2; a > 0; a++)
	{   
		float c = a;
		for (int m = 0; m < 9; m++)
		{
			
			float b = (a / 2.0 - 1);

			a = b;
			
		}
		if (a == 1) cout << c<<endl;
		a = c;

	}
	return 0;
}