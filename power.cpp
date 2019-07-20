#include<iostream>
using namespace std;
int power(int a,int b)
{
	if(b==1)
		return a;
	int ans;
	if(b%2==0)
	{
		ans=power(a,b/2);
		//if(b!=2)
		ans=ans*ans;
	}
	else
	{
		ans=power(a,b-1);
		ans=ans*a;
	}
	return ans;
}
int main()
{
	int a,b;
	cin>>a>>b;
	int r=power(a,b);
	cout<<r;
}
