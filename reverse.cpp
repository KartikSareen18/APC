#include<iostream>
using namespace std;
int reverse(int n)
{
	static int i;
	if(n<10)
	{
		i=10;
		return n;
	}
	int ans=reverse(n/10);
	int a=(n%10)*i;	
	i=i*10;
	return ans+a;
}
int main()
{
	int n;
	cin>>n;
	cout<<reverse(n)<<endl;
}
