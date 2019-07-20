#include<iostream>
using namespace std;
void rev(char *s,int i,int j)
{
	while(i>=0)
	{
		char c=s[i];
		s[i]=s[j];
		s[j]=c;
		i--;j++;
	}
}
void func(char *s,int i,int j)
{
	int k;
	if(s[j]=='\0')
	{
		k=i+1;
		i--;
		rev(s,i,k);
	}
	else
	{
		if(s[j+1]=='\0')
		{
			k=i+1;
			rev(s,i,k);
		}
		else
		{
			i++;j+=2;
			func(s,i,j);
		}
	}	
}
int main()
{
	char s[100];
	cin.getline(s,100);
	func(s,0,1);
	cout<<s<<endl;
}
