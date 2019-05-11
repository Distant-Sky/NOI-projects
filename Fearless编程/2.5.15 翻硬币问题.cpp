#include<bits/stdc++.h>
using namespace std;
int d[7]= {0,-5,-3,-1,1,3,5},n,tail=1,r;
struct node {
	int num;
	int prev,depth;
} data[256],current;
bool valid() {
	if(current.num+d[r]<0||current.num+d[r]>n) return false;
	return true;
}
bool repeated(int h) {
	for(int i=1; i<h; i++) {
		if(data[h].num==data[i].num) return true;
	}
	return false;
}
void print(int g) {
	int depth=data[tail].depth,prev=tail;
	int ans[depth],i;
	ans[0]=tail;
	for (i=1; i<depth; i++) {
		prev=data[prev].prev;
		ans[i]=prev;
	}
	for(i=0; i<depth; i++) {
		cout<<"node:"<<ans[i]<<' '<<"prev:"<<data[ans[i]].prev<<' '<<"depth:"<<data[ans[i]].depth<<endl;
		for(int j=0; j<data[ans[i]].num; j++)
			cout<<"¡õ";
		for(int j=0; j<n-data[ans[i]].num; j++)
			cout<<"¡ö";
		cout<<endl;
	}
}
int BFS() {
	data[1].depth=0;
	data[1].num=n;int s=0;
	int head=0;
	do {
		head++;
		current=data[head];
		cout<<"current:"<<s++<<" prev:"<<current.prev<<" depth:"<<current.depth<<" number:"<<current.num<<endl;
		for(r=1; r<7; r++) {
			if(valid()) {
				current.num+=d[r];
				current.depth++;
				current.prev=head;
				data[tail]=current;tail++;
				if(repeated(tail)) tail--;
				else if(data[tail].num==0) {
					print(tail);
					return 0;
				}
				cout<<"testnode:"<<tail-1<<" prev:"<<head<<" depth:"<<current.depth<<" number:"<<current.num<<endl;
			}
		}
	} while(head<tail);
	cout<<"no answers!"<<endl;
}
main() {
	cin>>n;
	BFS();
}
