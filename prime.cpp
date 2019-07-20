#include<iostream>
using namespace std;
int nextPrime(int i)
{
	int a=i+1;
	while(true)
	{
		int f=0;
		for(int j=1;j<=a;j++)
			if(a%j==0)
				f++;
		if(f==2)
			return a;
		else
			a++;
	}
}
void prime(int n,int i=2)
{
	if(n==1)
		return;
	if(n%i==0)
	{
		cout<<i<<endl;
		prime(n/i,i);
	}
	else
	{
		i=nextPrime(i);
		prime(n,i);
	}
}
int main()
{
	int n;
	cin>>n;
	prime(n);
}
