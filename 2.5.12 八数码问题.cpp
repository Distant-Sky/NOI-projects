#include<bits/stdc++.h>
using namespace std;
int dx[5]={0,1,0,-1,0},dy[5]={0,0,1,0,-1},r,tail=1;
int b[4][4]={{0,0,0,0},{0,1,2,3},{0,8,0,4},{0,7,6,5}};
void sw(int &a,int &b)
{
	int t=a;a=b;b=t;
}
struct node
{
	int num[4][4];
	int x,y;
	int prev,depth;
}data[100],current;
bool valid()
{
	if(current.x+dx[r]==0||current.x+dx[r]==4) return false;
	if(current.y+dy[r]==0||current.y+dy[r]==4) return false;
	return true;
}
bool repeated(int h)
{
	for(int i=1;i<h;i++)
	for(int j=1;j<4;j++)
	for(int k=1;k<4;k++)
		if(data[h].num[j][k]!=data[i].num[j][k]) return false;
	return true;
}
bool succeed()
{
	for(int q=1;q<4;q++)
	for(int w=1;w<4;w++)
	if(current.num[q][w]!=b[q][w]) return false;
	return true; 
}
void print(int g)
{
	node c[10];int s=0;
	while(data[g].depth!=0)
	{
		c[data[g].depth]=data[g];
		g=data[g].prev;s++;
	}
	for(int i=0;i<s;i++)
	{
		if(i!=0) cout<<"No."<<i<<endl;
		for(int j=1;j<4;j++)
		{
			for(int k=1;k<4;k++)
			cout<<c[i].num[j][k]<<" ";
			cout<<endl;
		}
	}
}
void BFS()
{
	data[1].depth=0;
	int a[4][4]={{0,0,0,0},{0,2,8,3},{0,1,6,4},{0,7,0,5}};
	for(int q=0;q<4;q++)
	for(int w=0;w<4;w++)
	data[1].num[q][w]=a[q][w];
	data[1].prev=0;data[1].x=2;data[1].y=3;
	int head=0;
	do
	{
		head++;
		for(r=1;r<=4;r++)
		{
			current=data[head];
			sw(current.num[current.x][current.y],current.num[current.x+dx[r]][current.y+dy[r]]);
			if(valid())
			{
				current.x+=dx[r];current.y+=dy[r];current.depth++;
				current.prev=head;
				tail++;data[tail]=current;
				if(repeated(tail)) tail--;
				else if(succeed()) {print(tail);break;}
			}
		}
	}while(head<tail);
	cout<<"no answers!"<<endl;
}
main()
{
	BFS();
}
