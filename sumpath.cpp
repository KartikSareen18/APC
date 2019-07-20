#include<iostream>
using namespace std;
bool func(int a[4][5],int i, int j,int k)
{
	if(i>=4)
	{
		if(k==0)
			return true;
		else
			return false;
	}
	bool b=func(a,i+1,j-1,k-a[i][j]);
	if(b==false)
		b=func(a,i+1,j+1,k-a[i][j]);
	return b;
}
int main()
{
	int arr[4][5];
	for(int i=0;i<4;i++)
		for(int j=0;j<5;j++)
			cin>>arr[i][j];
	bool a=func(arr,1,2,10);
	cout<<a<<endl;
}
