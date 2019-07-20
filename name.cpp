#include<iostream>
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
int main()
{
	char s[100];
	cin.getline(s,100);
	int inword=0,i=0,si=-1,ei=-1;
	while(s[i]!='\0')
	{
		if(s[i]==' ')
		{
			if(inword==1)
				ei=i;
			inword=0;
		}
		else
		{
			if(inword==0)
			        si=i;
			inword=1;
		}
		if(ei!=-1)
		{
			trim(s,si+1,ei);
			i=si+1;			
			si=-1,ei=-1;			
		}
		i++;
	}
	cout<<s<<endl;	
}	

