#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
main()
{
	int a[100][100],i,j,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		a[i][0]=1;
		a[i][i]=1;
	}
	for(i=2;i<n;i++)
	{
		for(j=1;j<2*i-2;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(i=0;i<n;i++)
	{
		if(i!=n-1)cout<<setw(2*n-2*i)<<"";
		else cout<<"  ";
		for(j=0;j<=i;j++)cout<<setw(4)<<a[i][j];
		cout<<endl;
	}
}
