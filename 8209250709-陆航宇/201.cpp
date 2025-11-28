#include<iostream>
using namespace std;
int main() {
	char a;
	cout << "请输入字符：" << endl;
	cin >> a;
	
	if (a >= 'a' && a <= 'z')
	{
		char b= a - 32;
		cout << "大写为；" << b << endl;

	}
	else
	{
		int c = a + 1;
		cout << "非字母，后继字符码值为：" << c << endl;



	}
	return 0;
}