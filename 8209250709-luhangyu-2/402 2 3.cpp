#include <iostream>
using namespace std;

void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
       
        bool swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
           
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
       
        if (!swapped) break;
    }
}

int main() {
    int n;

    
    cout << "请输入数组元素个数: ";
    cin >> n;

    if (n <= 0) {
        cout << "输入无效！" << endl;
        return -1;
    }

    
    int* arr = new (nothrow) int[n];

    
    if (arr == nullptr) {
        cout << "内存分配失败！" << endl;
        return -1;
    }

    cout << "请输入 " << n << " 个整数: ";

   
    for (int i = 0; i < n; i++) {
        
        cin >> *(arr + i);
    }

   
    bubbleSort(arr, n);

    
    cout << "排序后的数组元素为: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    
    delete[] arr;
    arr = nullptr;

    return 0;
}