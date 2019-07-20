#include<iostream>
using namespace std;
int main()
{
	char s[100];
	cin.getline(s,100);
	int a[256]={0};
	int i=0;
	while(s[i]!='\0')
	{
		a[s[i]]+=1;
		i++;
	}
	for(int i=0;i<=256;i++)
		if(a[i]!=0 &&((i>=65 && i<=90)||(i>=97 && i<=122)))
		{
			char c=i;
			cout<<c<<":"<<a[i]<<endl;
		}
} 
