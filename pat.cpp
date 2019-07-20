#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=65;j<=65+n-i;j++)
			cout<<(char)j;
		int p=2*i-3;
		for(int k=1;k<=p;k++)
			cout<<" ";
		int x;
		if(i==1)
			x=63+n;                                       //65+n-2
		else
			x=65+n-i;                                            
		for(;x>=65;x--)
			cout<<(char)x;
		cout<<endl;	
	}
}
