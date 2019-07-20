#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int arr[m][n];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
	int i=0,j;
	int col[n]={0};
	while(i<m)
	{		
		int flag=0;
		for(j=0;j<n;j++)
		{
			if(arr[i][j]==0)
			{
				col[j]=1;
				flag=1;
			}
		}
		if(flag==1)
			for(j=0;j<n;j++)
				arr[i][j]=0;
		i++;	
	}	
	i=0;	
	for(j=0;j<n;j++)
	{
		if(col[j]==1)	
		{
			for(i=0;i<m;i++)
				arr[i][j]=0;
		}	
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}
}

