#include<iostream>
using namespace std;
void merge( int list1[], int size1, int list2[], int size2, int list3[])
{
	int m = 0; int n = 0; int g = 0;
	while (m < size1 && n < size2)
	{
		if (list1[m] < list2[n])
		{
			list3[g++] = list1[m++];
		}
		else { list3[g++] = list2[n++]; }
	}

	while (m < size1) { list3[g++] = list1[m++]; }
	while (n < size2) {list3[g++] = list2[n++];}

}

int main()
{

	const int max = 80;
	int size1; int size2;
	int list1[max]; int list2 [max]; int list3 [max];
	cout << "enter list1: ";
	cin >> size1;
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "enter list2: ";
	cin >> size2;
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	
	merge(list1, size1, list2, size2, list3);
		cout << "the merged list is: ";
		for(int i=0;i<size1+size2;i++)
		{
			cout << list3[i]<<" ";
		}
		return 0;
}