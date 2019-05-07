#include<iostream>
using namespace std;
main()
{
	int a[20]={0},t,i,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	t=a[n-1];
	for(i=n;i>0;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=t;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
