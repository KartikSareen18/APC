#include<iostream>
using namespace std;
void add(int n,int flag=0,int sum=0)
{
	if(n<10)
	{
		if(flag==0)
			sum+=n;
		sum+=n;
		cout<<sum<<endl;
		return;
	}
	if(flag==0)
	{
		sum+=n%10;
		flag=1;	
	}
	add(n/10,flag,sum);
}
void add1(int n,int flag=0,int sum=0)
{
	if(n>9 && n<100)
	{
		if(flag==0)
			sum+=n%10;
		sum+=n%10;
		cout<<sum<<endl;
		return;
	}
	if(flag==0)
	{
		sum+=n%10;
		flag=1;	
	}
	add1(n/10,flag,sum);
}
int main()
{
	int n;
	cin>>n;
	add(n);
	if(n>=100)
	add1(n/10);
}
