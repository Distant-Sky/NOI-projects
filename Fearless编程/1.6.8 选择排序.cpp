#include<iostream>
using namespace std;
main()
{
	int a[30]={0},i,c,n,k;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		k=i;
		for(c=i;c<n-1;c++)
		{
			if(a[k]<a[c+1])
			{
				k=c+1;
			}
		}
		if(k!=i)swap(a[i],a[k]);
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
