#include <iostream>
using namespace std;
int main() {
    int count = 2;  
    int totalCount = 2;
    double totalCost = 2 * 0.8;  
    int day = 1;
    while (true) {
        int nextCount = count * 2;
        if (nextCount > 100) {
            break;
        }
        count = nextCount;
        totalCount += count;
        totalCost += count * 0.8;
        day++;
    }
    double avgCost = totalCost / day;
    cout << "总天数：" << day << endl;
    cout << "总花费：" << totalCost << "元" << endl;
    cout << "每天平均花费：" << avgCost << "元" << endl;
    return 0;
}