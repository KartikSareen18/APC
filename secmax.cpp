#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int *arr=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int max=arr[0],max1;
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max1=max;
			max=arr[i];
			break;
		}
		else if(arr[i]<max)
		{
			max1=arr[i];
			break;
		}
	}
	for(int j=i+1;j<n;j++)
	{
		if(arr[j]>max)
		{
			max1=max;
			max=arr[j];
		}
		else if(arr[j]<max)
		{
			max1=arr[j];
		}
	}
	cout<<max1<<endl;
}

