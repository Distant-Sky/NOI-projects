#include<bits/stdc++.h>
using namespace std;
struct node {
	int a[4][4];
	int x,y;//����
	int pnt,dep; //���ڵ� ���
} data[100],now,tempnode; //�������ݿ�
int dx[4] = {0,0,1,-1},dy[4] = {1,-1,0,0};
int head = 0, tail = 1;
int succ[4][4] = {{0,0,0,0},{0,1,2,3},{0,8,0,4},{0,7,6,5}};
void print(int i) {
	cout<<"node:"<<i<<' '<<"prev:"<<data[i].pnt<<' '<<"depth:"<<data[i].dep<<endl;
	for (int j = 1; j<=3; j++) {
		for (int k = 1; k<=3; k++)
			cout << data[i].a[j][k] << ' ' ;
		cout << endl;
	}
}
bool gothere(int move) {
	if (now.x + dx[move] <= 3 && now.x + dx[move] >= 1 && now.y + dy[move] <= 3 && now.y + dy[move] >= 1) return true;
	else return false;
}
bool repeat() {
	int f = 0;
	for (int i = 1; i < tail; i++) {
		int f = 0;
		for (int j = 1; j<=3; j++)
			for (int k = 1; k<=3; k++)
				if (data[i].a[j][k] != tempnode.a[j][k]) f = 1;
		if (f == 0) return true;
	}
	return false;
}
bool ifsucc() {
	int f = 1;
	for (int j = 0; j<=3; j++)
		for (int k = 0; k<=3; k++)
			if (tempnode.a[j][k] != succ[j][k]) f = 0;
	if (f == 1) return true;
	else return false;
}
int bfs() {
	do {
		head++;
		now = data[head];
		for(int move = 0; move < 4; move ++) {
			if (gothere(move)) {
				tail++;
				//newnode
				tempnode = now;
				tempnode.a[tempnode.y][tempnode.x] = tempnode.a[tempnode.y + dy[move]][tempnode.x + dx[move]];
				tempnode.x = tempnode.x + dx[move];
				tempnode.y = tempnode.y + dy[move];
				tempnode.a[tempnode.y][tempnode.x] = 0;
				tempnode.dep ++;
				tempnode.pnt = head;
				data[tail] = tempnode;
				if (repeat())tail--;
				else if (ifsucc()) return 1;
				//print(tail);
			}
		}
	} while (head < tail&&data[tail].dep<=7);
	return 0;
}
void out() {
	int dep = data[tail].dep,pnt = tail;
	int ans[dep];
	ans[0] = tail;
	for (int i = 1; i < dep; i++) {
		pnt = data[pnt].pnt;
		ans[i] = pnt;
	}
	for (int i = dep-1; i >= 0; i--) print(ans[i]);
}
int main() {
	int temp[4][4] = {{0,0,0,0},{0,2,8,3},{0,1,6,4},{0,7,0,5}};
	for (int j = 0; j<=3; j++)
		for (int k = 0; k<=3; k++)
			data[1].a[j][k] = temp[j][k];
	data[1].x = 2;
	data[1].y = 3;
	data[1].pnt = 0;
	data[1].dep = 0;//��ʼ״̬���
	print(1);
	if (bfs() == 1) out();
	else cout << "�޽⣡";
}
