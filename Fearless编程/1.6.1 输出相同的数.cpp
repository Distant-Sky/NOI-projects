#include<iostream>
using namespace std;
main()
{
	int m,i,n,k=0;
	int a[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(i=0;i<n;i++)
	{
		if(a[i]==m) k++;
	}
	cout<<k;
}
