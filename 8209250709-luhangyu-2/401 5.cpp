#include <iostream>
#include <cstring>
using namespace std;

int indexOf(const char s1[], const char s2[]) {
   
    if (s1[0] == '\0') {
        return -1;
    }

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    
    for (int i = 0; i <= len2 - len1; i++) {
        bool match = true;
        for (int j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return i;  
        }
    }
    return -1;  
}

int main() {
    const int MAX_LEN = 1000;
    char s1[MAX_LEN];
    char s2[MAX_LEN];

    cout << "enter the first string:  ";
    cin.getline(s1, MAX_LEN);

    cout << "enter the second string: ";
    cin.getline(s2, MAX_LEN);

    int index = indexOf(s1, s2);

    if (index != -1) {
        cout << "the index of the first string in the second string is: "<<index << endl;
    }
    else {
        cout << "the index of the two is：-1" << endl;
    }

    return 0;
}