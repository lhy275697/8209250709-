#include <iostream>
using namespace std;
int b[50] = {0};
    
int main()
{
    int arr[10];
   
    int count = 0;   
    int num;

    cout << "enter ten nmbers ： " << endl;

    for (int i = 0; i <10; i++) 
    {
        cin >> num;
        if (num >= 0 && num <= 50 && !b[num])


        {
            b[num] = 1;
            arr[count] = num;
            count++;
        }

    }

        
        cout << "the distinct numbers are:  ";
        for (int k = 0; k < count; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    

    return 0;
}