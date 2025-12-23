#include <iostream>
using namespace std;


int parseHex(const char* const hexString) {
   
    if (hexString == nullptr) {
        return 0;
    }

    int result = 0;
    int i = 0;

    
    while (hexString[i] != '\0') {
        char c = hexString[i];

       
        result = result * 16;

       
        if (c >= '0' && c <= '9') {
           
            result += c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            
            result += c - 'A' + 10;
        }
        else if (c >= 'a' && c <= 'f') {
         
            result += c - 'a' + 10;
        }
        
        
        i++;
    }

    return result;
}

int main() {
   
    cout << "parseHex(\"A5\") = " << parseHex("A5") << endl;

    cout << "parseHex(\"FF\") = " << parseHex("FF") << endl;
    cout << "parseHex(\"10\") = " << parseHex("10") << endl;
    cout << "parseHex(\"BEEF\") = " << parseHex("BEEF") << endl;
    cout << "parseHex(\"abcdef\") = " << parseHex("abcdef") << endl;

    return 0;
}