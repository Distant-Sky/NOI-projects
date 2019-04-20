#include<bits/stdc++.h>
using namespace std;
int dx[5]={0,1,0,-1,0},dy[5]={0,0,1,0,-1};
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
	
}
bool repeated()
{
	
}
bool succeed()
{
	
}
void print()
{
	
}
void BFS()
{
	data[1].depth=0;
	data[1].num={{0,0,0,0},{0,2,8,3},{0,1,6,4},{0,7,0,5}};
	data[1].prev=0;data[1].x=2;data[1].y=3;
	int head=0,tail=1;
	do
	{
		head++;
		for(int r=1;r<=4;r++)
		{
			current=data[head];
			swap(current.num[current.x][current.y],current.num[current.x+dx[r]][current.y+dy[r]]);
			if(valid())
			{
				current.x+=dx[r];current.y+=dy[r];
				tail++;data[tail]=current;
				if(repeated()) tail--;
				else if(succeed()) {print();break;}
			}
		}
	}while(head<tail);
	cout<<"no answers!"<<endl;
}
main()
{
	BFS();
}
