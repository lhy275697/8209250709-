#include<iostream>
using namespace std;

	void bs (double arr[], int size)
	{
		bool changed = 1;
		do {
			changed = 0;
			for (int j = 0; j < size-1; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					double temp;
					temp = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = temp;
					changed = true;
				}
			}
		} while (changed); 
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
	}
	
	

int main() {
    const int SIZE = 10;
    double numbers[SIZE];

    cout << "请输入 10 个双精度浮点数：" << endl;

    
    for (int i = 0; i < SIZE; i++) { 
        cout << "第 " << (i + 1) << " 个: ";
        cin >> numbers[i];
    }
	 bs (numbers, SIZE);
   

    return 0;
}