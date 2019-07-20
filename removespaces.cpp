#include<iostream>
#include<string.h>
using namespace std;
void trim(char *s,int i,int j)
{
	while(s[j]!='\0')
	{
		s[i]=s[j];
		i++;
		j++;
	}
	s[i]='\0';
}
void ltrim(char *s)
{
	int j=0;
	while(s[j]==' ')
	{
		j++;
	}
	int i=0;
	while(s[j]!='\0')
	{
		s[i]=s[j];
		i++;j++;
	}
	s[i]='\0';
}
void rtrim(char *s,int i)
{
	s[i]='\0';
}
int main()
{
	char s[100];
	cin.getline(s,100);
	cout<<strlen(s)<<endl;
	int i=0,si=-1,ei=-1,inword=0;
	if(s[i]==' ')
		ltrim(s);
	while(s[i]!='\0')
	{
		if(s[i]==' ')
		{
			if(inword==1)
				si=i;
			inword=0;
		}
		else
		{
			if(inword==0)
				ei=i;
			inword=1;
		}
		if(si!=-1 && ei!=-1)
		{
			if(ei-si>1)
			{
				trim(s,si+1,ei);
				si=-1;ei=-1;
				i=i-(ei-si);
			}
		}
		i++;
	}
	if(inword==0)
		rtrim(s,si);
	cout<<s<<endl;
	cout<<strlen(s)<<endl;
}
