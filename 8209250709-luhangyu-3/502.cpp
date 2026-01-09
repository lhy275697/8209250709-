
#include"502.h"
#include<cstring>
using namespace std;
void Student::display()       //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name:" << name << endl;

    cout << "sex：" << sex << endl;
}
void Student::set_value(int num1,const char* name1,const char* sex1)
{
   
    num = num1; 
    strcpy_s(name, name1); // 使用 strcpy 复制字符串
    strcpy_s(sex, sex1);
}