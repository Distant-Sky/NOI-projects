#include<bits/stdc++.h>
using namespace std;
int p[50][50]={0},s=0;
int cx,cy,n,m,bx[8]={1,1,2,2,-1,-1,-2,-2},by[8]={2,-2,1,-1,2,-2,1,-1};
void print()
{
	int i,j;
	s++;
	cout<<s<<endl;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		cout<<setw(4)<<p[i][j];
		cout<<endl;
	}
}
int search(int i,int x,int y)
{
	int j;
	for(j=1;j<=8;j++)
		if(cx+bx[j-1]>0&&cx+bx[j-1]<=m&&cy+by[j-1]>0&&
		cy+by[j-1]<=n&&p[cx+bx[j-1]][cy+by[j-1]]==0)
		{
			cx+=bx[j-1];cy+=by[j-1];
			p[cx][cy]=i;
			if(p[cx][cy]==n*m) print();
			else search(i+1,cx,cy);
			p[cx][cy]=0;cx-=bx[j-1];cy-=by[j-1];
		}
}
main()
{
	cin>>n>>m>>cx>>cy;
	p[cx][cy]=1;
	search(2,cx,cy);
}
