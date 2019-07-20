#include<iostream>
using namespace std;
int main()
{
	char s[100];
	cin.getline(s,100);
	int flag=0,i=0;
	while(s[i]!='\0')
	{
		if(s[i]==' ')
		{
			if(flag==1)
				cout<<s[i-1]<<": "<<i-1<<endl;
			flag=0;
		}
		else
		{
			if(flag==0)
			        cout<<s[i]<<": "<<i<<" ";
			flag=1;
		}
		i++;
	}
	if(flag==1)
		cout<<s[i-1]<<":"<<i-1<<endl;
}	

