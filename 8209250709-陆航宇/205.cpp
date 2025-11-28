#include <iostream>
#include <cctype> 

using namespace std;

int main() {
    int letter = 0, space = 0, digit = 0, other = 0;
    char c;

    cout << "请输入一行字符（以回车结束）：" << endl;

    
    while (cin.get(c) && c != '\n') {
        if (isalpha(c)) {      
            letter++;
        }
        else if (isspace(c)) { 
            space++;
        }
        else if (isdigit(c)) { 
        }
        else {
            other++; 
    }

    cout << endl << "统计结果：" << endl;
    cout << "字母数量：" << letter << endl;
    cout << "空格数量：" << space << endl;
    cout << "数字数量：" << digit << endl;
    cout << "其他字符数量：" << other << endl;

    retureturn 0;
}
