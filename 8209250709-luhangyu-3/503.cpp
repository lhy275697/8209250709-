#include <iostream>
using namespace std;


class Box {
public:
    // 公用成员函数
    void set_value();  
    double volume();    
    void display();     
private:
    // 私有数据成员
    double length;
    double width;
    double height;
};



void Box::set_value() {
    cout << "请输入长方柱的长、宽、高: ";
    cin >> length >> width >> height;
}


double Box::volume() {
    return length * width * height;
}

void Box::display() {
    cout << "体积为: " << volume() << endl;
}


int main() {
   
    Box box1, box2, box3;

    
    cout << "输入第1个长方柱的数据：" << endl;
    box1.set_value();
    box1.display();

    
    cout << "输入第2个长方柱的数据：" << endl;
    box2.set_value();
    box2.display();

   
    cout << "输入第3个长方柱的数据：" << endl;
    box3.set_value();
    box3.display();

    return 0;
}