#include<bits/stdc++.h>
using namespace std;
int n,m,s=0,b[100]={0},a[100]={0},f[100]={0};
void bub(int z[],int p)
{
	for(int i=1;i<p;i++)
	{
		for(int o=0;o<n-o;o++)
		{
			if(z[o]>z[o+1])
			{
				int t=z[o];z[o]=z[o+1];z[o+1]=t;
			}
		}
	}
}
void pr(int i)
{
	for(int j=0;j<=i;j++)
	cout<<a[j];
}
void sh(int i)
{
	int j;
	for(j=0;j<n;j++)
	{
		if(s+b[j]<=m&&!f[j])
		{
			a[i]=b[j];f[j]=1;s+=b[j];
			if(s==m) pr(i);
			else sh(i+1);
			f[j]=0;
		}
	}
}
main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>b[i];
	bub(b,n);
	cin>>m;
	sh(1);
}
