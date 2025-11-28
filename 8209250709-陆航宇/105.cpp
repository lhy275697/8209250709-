#include <iostream>
using namespace std;
int main()
{
	cout << "输入华氏温度:" << endl;
	float a; float b;
	cin >> a;
	b = (a - 32.0) / 1.8;
	cout << "结果为：" << b << endl;
    system("pause");
	return 0;
}