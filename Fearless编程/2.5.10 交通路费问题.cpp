#include<bits/stdc++.h>
using namespace std;
int a[7]={0},mx=0,mn=100,m[7]={0},n[7]={0},f[7]={0};
int b[7][7]={{0},{0,0,3,5,0,0,0},{0,3,0,1,7,4,0},{0,5,1,0,0,2,0},{0,0,7,0,0,1,7}
,{0,0,4,2,1,8},{0,0,0,0,7,8,0}};
void dfs(int i,int sum)
{
	int j,k;
	for(j=1;j<7;j++)
	if(b[i][j]!=0&&f[j]==0)
	{
		a[i]=j;sum+=b[i][j];f[j]=1;
		if(i==6)
		{
			if(sum>mx) {mx=sum;for(k=1;k<=i;k++) m[k]=a[k];}
			else if(sum<mn) {mn=sum;for(k=1;k<=i;k++) n[k]=a[k];}
		}
		else dfs(i+1,sum);
		if(i!=1)a[i]=0;sum-=b[i][j];f[j]=0;
	}
}
main()
{
	int k=1;a[1]=1;f[1]=1;
	dfs(1,0);
	cout<<"max:"<<mx<<endl;
	while(m[k]!=6)
	{k++;
	cout<<m[k]<<"->";}cout<<"6"<<endl;
	cout<<"min:"<<mn<<endl;k=1;
	while(n[k]!=6){k++;
	cout<<n[k]<<"->";}cout<<"6"<<endl;
}
