#include<iostream>
#include<cstdio>
using namespace std;
int n=12,s=0,h[13]={0,276,263,300,287,315,278,281,300,276,275,301,253};
int f[13],currentf[13][13],c[8],pre[13],t;
void DP()
{
	int i,j,mxc,a[13];
	f[1]=1;
	for(i=2;i<13;i++)
	{
		mxc=1;int st=0;
		f[i]=1;
		for(j=1;j<i;j++)
		if(h[i]<=h[j]&&j<i) {currentf[i][++st]=f[j]+1;a[st]=j;}
		for(j=1;j<=st;j++)
		if(currentf[i][j]>mxc) {mxc=currentf[i][j];t=j;}
		f[i]=mxc;pre[i]=a[t];
	}
	pre[1]=0;
	for(i=2;i<13;i++)
	{
		mxc=0;
		//cout<<"No."<<i<<" num:"<<f[i]<<endl;
		if(f[i]>mxc)
		{mxc=f[i];t=i;}
	}
	i=t;
	while(pre[i]!=1)
	{
		c[++s]=h[pre[i]];
		i=pre[i];
	}
	cout<<"total:"<<mxc<<endl;
	for(i=mxc-1;i>0;i--)
	cout<<c[i]<<"  ";
	cout<<h[12];
}
main()
{
	DP();
}
