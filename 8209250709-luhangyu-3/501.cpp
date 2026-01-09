#include<iostream>
using namespace std;
class Time       // 定义Time类
{
public:
	void settime()
	{
		cout << "请输入具体时间：(时，分，秒)  " << endl;
		int hour; int minute; int sec;
		cin >> hour >> minute >> sec;
		p_hour = hour; p_minute = minute; p_sec = sec;
	}


	void puttime()
	{
		cout << p_hour << ":" << p_minute << ":" << p_sec  << endl;

	}

private:              // 数据成员为公用的
		int p_hour;
	int p_minute;
	int p_sec;
	
};
int main()
{
	Time tl;           //定义t1为Time类对象
	
	tl. settime();
	tl. puttime();
	return 0;
}
