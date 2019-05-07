#include<iostream>
using namespace std;
main()
{
	int a[100]={0},n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		cout<<a[n-i]<<" ";
	}
}
