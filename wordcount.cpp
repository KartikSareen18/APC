#include<iostream>
using namespace std;
int main()
{
	char s[100];
	cin.getline(s,100);
	int flag=0,count=0,i=0;
	while(s[i]!='\0')
	{
		if(s[i]==' ')
			flag=0;
		else
		{
			if(flag==0)
				count++;
			flag=1;
		}
		i++;
	}
	cout<<count<<endl;
}	

