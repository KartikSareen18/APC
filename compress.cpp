#include<iostream>
#include<cstring>
using namespace std;
void shift(char *s,int i,int j)
{
	while(s[j]!='\0')
	{
		s[i]=s[j];
		i++;
		j++;
	}	
	s[i]='\0';
}
void rshift(char *s,int i,int j)
{
	
	int l=strlen(s);
	int m=l+j;
	while(m!=i)
	{
		s[m]=s[l];
		l--;m--;		
	}
}
void compress(char *s)
{
	char currchar=s[0];
	int i=1,count=1,ind=1;
	while(s[i]!='\0')
	{
		if(s[i]!=currchar)
		{
			if(count!=1)
			{
				s[ind]=count+48;
				currchar=s[i];			
				shift(s,ind+1,i);		
				count=1;
				i=ind+1;
			}
			else
			{
				currchar=s[i];
				rshift(s,i,1);
				s[i]=count+48;
				i++;
			}
		}
		else
		{
			count++;
			if(count==2)
				ind=i;
		}
		i++;
	}
	if(count!=1)
	{
		s[ind]=count+48;
		shift(s,ind+1,i);
	}
	else
	{
		s[i]=count+48;
		s[i+1]='\0';	
	}
}
void decompress(char *s)
{
	int l=strlen(s);
	l--;
	while(l>0)
	{
		if(s[l]>='3' && s[l]<='9')
		{
			int a=s[l]-48;
			int j=l-1;			
			rshift(s,l,a-2);
			for(int k=l+a-2;k>j;k--)
				s[k]=s[j];
			
		}
		else if(s[l]=='2')
			s[l]=s[l-1];
		else if(s[l]=='1')
			shift(s,l,l+1);
		l--;
	}
}
int main()
{
	char s[100];
	cin.getline(s,100);
	compress(s);
	cout<<"After Compressing:"<<s<<endl;
	decompress(s);
	cout<<"After Decompressing:"<<s<<endl;
}
