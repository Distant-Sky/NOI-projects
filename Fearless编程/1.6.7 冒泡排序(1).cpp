#include<iostream>
using namespace std;
main()
{
	int a[100]={0},i,n,c;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(c=1;c<n;c++)
		{
			if(a[n-c]>a[n-c-1])
			{
				swap(a[n-c],a[n-c-1]);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
