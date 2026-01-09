#include <iostream>
using namespace std;


class Student {
public:
    int id;      

    float score;  

    void max(Student*arr, int n)
    {
        int max = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i].score > arr[max].score) {
                max = i;
            }
        }
        cout << "最高成绩的学生学号是：" << arr[max].id << endl;
    }
};




int main() {
    
    Student students[5] = {
        {1, 85.5},   
        {2, 92.0},   
        {3, 78.5},   
        {4, 95.0},   
        {5, 88.0}    
    };

    students[0].max(students, 5);

    return 0;
}