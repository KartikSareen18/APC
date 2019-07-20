#include<iostream>
using namespace std;
int sum(int n,int s=0)
{
	if(n<10)
	{
		s+=n;
		return s;
	}
	s+=n%10;
	int ans=sum(n/10,s);
	return ans;
}
int main()
{
	int n;
	cin>>n;
	cout<<sum(n)<<endl;
}
