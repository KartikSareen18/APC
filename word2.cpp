#include<iostream>
using namespace std;
int main()
{
	char s[100];
	cin.getline(s,100);
	int flag=0,i=0,si=0,ei=0;
	while(s[i]!='\0')
	{
		if(s[i]==' ')
		{
			if(flag==1)
				ei=i-1;
			flag=0;
		}
		else
		{
			if(flag==0)
			        si=i;
			flag=1;
		}
		i++;
	}
	if(flag==1)
		ei=i-1;
	cout<<s[si]<<":"<<si<<" "<<s[ei]<<":"<<ei<<endl;
}	

