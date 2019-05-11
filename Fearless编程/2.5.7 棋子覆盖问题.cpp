#include<bits/stdc++.h> 
using namespace std;
int n,a[50][50]={0},bx[2]={0,1},
x,y,by[2]={1,0},s=0;
FILE *fout;
void print()
{
	int i,j;
	s++;
	fprintf(fout,"%d\n",s);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		fprintf(fout,"%d ",a[i][j]);
		fprintf(fout,"\n");
	}
}
void dfs(int i,int x,int y)
{
	int j;
	for(j=0;j<2;j++)
	{
		if(x+bx[j]>0&&x+bx[j]<=n&&
		y+by[j]>0&&y+by[j]<=n&&a[x][y]==0
		&&a[x+bx[j]][y+by[j]]==0)
		{
			a[x][y]=i;a[x+bx[j]][y+by[j]]=i;
			if(i==n*n/2) print();
			else 
			{int t=x,e=y;
				while(a[t][e]!=0)
				{
					t++;
					if(t>n){t=1;e++;}
				}
			dfs(i+1,t,e);
		}
		a[x][y]=0;
		a[x+bx[j]][y+by[j]]=0;
		}
	}
}
main()
{
	fout=fopen("2.5.7 棋子覆盖问题.txt","w");
	cin>>n;
	dfs(1,1,1);
	cout<<"请在文件夹内txt文件阅读答案"<<endl;
}
