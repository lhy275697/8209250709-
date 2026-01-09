#pragma once
#include <iostream> 
#include <cstring> 

class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();

	void set_value(int num, const char* name, const char* sex);
private:
	int num;
	char name[20];
	char sex[6];
};