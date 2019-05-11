#include<bits/stdc++.h>
using namespace std;
int n;
bool like[5][5]={{0,0,1,1,0},{1,1,0,0,1},{0,1,1,0,0},
{0,0,0,1,0},{1,1,0,0,1}};
int book[5];
void dfs(int i)
{
	int j;bool flag[5];
	for(j=0;j<=n;j++)
	if(like[i][j]&& !flag[j])
	{
		book[i]=j;flag[j]=1;
		if(i==n)
		{
			for(int c=0;c<=n;c++)
			cout<<c+1<<":"<<book[i]<<endl;
		} 
		else dfs(i+1);
		flag[j]=0;
	}
}
main()
{
	cin>>n;
	dfs(0);
}
