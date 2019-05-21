#include<iostream>
using namespace std;
int s[101][101]={0},f[101][101]={0},g[101][101]={0};
int n,fr[101][101]={0},gr[101][101]={0};
int max(int a,int b,int c,int d)
{
	if(a>b) 
	{
		fr[c][d]=0;return a;
	}
	else 
	{
		fr[c][d]=1;return b;
	}
}
int min(int a,int b,int c,int d)
{
	if(a<b) 
	{
		gr[c][d]=0;return a;
	}
	else 
	{
		gr[c][d]=1;return b;
	}
}
void print()
{
	int i=1,j=1;
	cout<<"max:"<<f[1][1]<<endl;
	cout<<"route:"<<endl;
	while(fr[i][j]!=-1)
	{
		cout<<s[i][j]<<"->";
		j+=fr[i][j];i++;
		cout<<s[i][j]<<endl;
	} 
	cout<<"min:"<<g[1][1]<<endl;
	cout<<"route:"<<endl;
	i=1;j=1;
	while(gr[i][j]!=-1)
	{
		cout<<s[i][j]<<"->";
		j+=gr[i][j];i++;
		cout<<s[i][j]<<endl;
	}
}
void DP()
{int i,j;
	for(i=1;i<=n;i++)
		for(j=1;j<=i;j++)
			cin>>s[i][j];
	for(i=1;i<=n;i++)
	{
		f[n][i]=s[n][i];
		g[n][i]=s[n][i];
		fr[n][i]=-1;
		gr[n][i]=-1;
	}
	for(i=n-1;i>0;i--)
		for(j=1;j<=i;j++)
		{
			f[i][j]=max(f[i+1][j],f[i+1][j+1],i,j)+s[i][j];
			g[i][j]=min(g[i+1][j],g[i+1][j+1],i,j)+s[i][j];
		}
	print();
}
main()
{
	cin>>n;
	DP();
} 
