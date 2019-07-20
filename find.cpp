#include<iostream>
using namespace std;
int find(char *s,int si,int ei,char *s1)
{
	int len1=ei-si+1;
	int i=0,len2=0,flag=0;
	while(s1[i]!='\0')
	{
		len2++;i++;
	}
	if(len1!=len2)
		return -1;
	i=si;int j=0;
	while(s1[j]!='\0')
	{
		if(s[i]!=s1[j])
		{
			flag=1;
			return -1;
		}
		i++;j++;
	}
	if(flag==0)
		return si;
}
int main()
{
	char s[100],s1[20];
	cin.getline(s,100);
	cin.getline(s1,20);
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
			int a=find(s,si,ei,s1);
			if(a!=-1)
			{
				cout<<"Found: "<<a<<endl;inword=0;
				break;	
			}
			si=-1,ei=-1;
		}
		i++;
	}
	if(inword==1)
	{
		ei=i-1;
		int a=find(s,si,ei,s1);
		if(a!=-1)
			cout<<"Found: "<<a<<endl;
		else
			cout<<"Not found"<<endl;
			
	}
}
	
