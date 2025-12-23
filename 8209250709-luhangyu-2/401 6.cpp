#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i=0;i<26;i++)
	{
		counts[i] = 0;
	}
	int i = 0;
	while (s[i] != '\0')
	{
		char zimu = tolower(s[i]);
		if (zimu >= 'a' && zimu<= 'z')
		{

			counts[zimu - 'a']++;
		}
		i ++;
	}
	for (int g = 0; g < 26; g++)
	{
		if(counts[g]!=0)
		{
			cout << char('a' + g) << ": " << counts[g] << " times" << endl;
		}

	}


}
int main()
{
	char s[101];
	int counts[26];
	cout << "enter the string : " << endl;
	cin.getline(s, 101);
	count(s, counts);

		return 0;
}