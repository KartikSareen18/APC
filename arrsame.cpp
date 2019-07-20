#include<iostream>
using namespace std;
bool same(int *arr,int i,int j)
{
	while(i>=0)
	{
		if(arr[i]!=arr[j])
			return false;		
		i--;j++;
	}
	return true;
}
bool func(int *arr,int i,int j)
{
	if(arr[j]==-1)
	{
		int k=i+1;
		i--;
		return same(arr,i,k);
	}
	else
	{
		if(arr[j+1]==-1)
			return same(arr,i,i+1);
		else
		{
			i++;j+=2;
			func(arr,i,j);
		}
	}
}
int main()
{
	int *arr=new int[1000];
	int i=0;
	cin>>arr[i];i++;
	while(arr[i-1]!=-1)
	{
		cin>>arr[i];
		i++;
	}
	bool a=func(arr,0,1);
	cout<<a<<endl;
}
