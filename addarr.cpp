#include<iostream>
using namespace std;
void add(int *arr,int i,int j)
{
	while(i>=0)
	{
		int c=arr[i]+arr[j];
		arr[i]=c;
		arr[j]=c;
		i--;j++;
	}
}
void func(int *arr,int i,int j)
{
	if(arr[j]==-1)
	{
		int k=i+1;
		i--;
		add(arr,i,k);
	}
	else
	{
		if(arr[j+1]==-1)
			add(arr,i,i+1);
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
	func(arr,0,1);
	for(int j=0;j<i;j++)
		cout<<arr[j]<<" ";
}
