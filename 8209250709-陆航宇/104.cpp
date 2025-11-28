#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;
	cout << "output in oct unsigned int type:" <<oct << testUnint << endl;
	cout << "请输入一个实数：" << endl;
	double a;
	cin >> a;
	int b = a;
	cout << "转化结果为：" << b<<endl;
	system("pause");
	return 0;
}