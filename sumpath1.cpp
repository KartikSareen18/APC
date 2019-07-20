#include<iostream>
using namespace std;
int func(int a[4][5],int i, int j,int k,int arr[5])
{
	static int ind=0;
	if(i>=4)
	{
		if(k==0)
		{
			for(int l=0;l<ind;l++)
				cout<<arr[l]<<" ";
			return 1;
		}
		return 0;
	}
	arr[ind]=a[i][j];ind++;
	int b=func(a,i+1,j-1,k-a[i][j],arr);
	if(b!=1)
		b=func(a,i+1,j+1,k-a[i][j],arr);
	ind--;
	return b;
}
int main()
{
	int arr[4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
	int a[5];
	int b=func(arr,1,2,40,a);
	if(b==0)
	cout<<b<<endl;
}
