#include<bits/stdc++.h>
using namespace std;
const int r=100001;
main()
{
	int n,m,k,x[r],y[r],d[r],c[r],i,j;
	int *a[r];
	cin>>n>>m>>k;
	for(i=1;i<=k;i++)
	{
		cin>>x[i]>>y[i]>>d[i];
		c[y[i]]++;
	}
	for(i=1;i<=m;i++) a[i]=new int[c[i]];
	for(i=1;i<=k;i++)
	{
		*a[y[i]]=d[i];
		a[y[i]]++;
	}
	for(i=1;i<=m;i++)
	{
		a[i]-=c[i];
		for(j=1;j<=c[i];j++,a[i]++)
		cout<<*a[i]<<" ";
	}
}
