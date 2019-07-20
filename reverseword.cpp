#include<iostream>
using namespace std;
void rev(char *s,int i,int j)
{
	while(i<j)
	{
		char temp=s[i];
		s[i]=s[j];
		s[j]=temp;
		i++;
		j--;
	}
}
int main()
{
	char s[100];
	cin.getline(s,100);
	int i=0,si=-1,ei=-1,inword=0;
	while(s[i]!='\0')
	{
		if(s[i]==' ')
		{
			if(inword==1)
				ei=i-1;
			inword=0;
		}
		else
		{
			if(inword==0)
				si=i;
			inword=1;
		}
		if(si!=-1 && ei!=-1)
		{
			rev(s,si,ei);
			si=-1;
			ei=-1;
		}
		i++;
	}
	if(inword==1)
	{
		ei=i-1;
		rev(s,si,ei);
	}
	cout<<s<<endl;
}
