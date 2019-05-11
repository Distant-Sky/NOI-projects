#include<bits/stdc++.h>
using namespace std;
int a[7]={0},s=0,sum=0,max=0,min=100;
int b[7][7]={{0},{0,0,3,5,0,0,0},{0,3,0,1,7,4,0},{0,5,1,0,0,2,0},{0,0,7,0,0,1,7}
,{0,0,4,2,1,8},{0,0,0,0,7,8,0}};
void dfs(int i,int dep,int arr)
{
	int j,k;
	for(j=1;j<7;j++)
		if(check(i,j))
		{
			a[i]=j;
			if(i==5)
			{
				if(sum>max) {max=sum;for(k=1;k<=)
				else if(sum<min) min=sum;
			}
			else dfs(i+1);
		}
}
main()
{
	int dep,arr;
	cin>>dep>>arr;
	dfs(1,dep,arr);
	cout<<
}
