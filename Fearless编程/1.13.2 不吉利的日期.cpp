#include<bits/stdc++.h>
using namespace std;
int wk(int n)
{
	if(n>0&&n<7) return n+1;
	if(n==7) return 1;
}
int mh(int m,int n,int l)
{
	
}
main()
{
	int i,w,m,d=1;
	cin>>w;
	for(i=1;i<366;i++)
	{
		w=wk(w);
		if(i>0&&i<31) {m=1;d=i+1;}
		else if(i<59) {m=2;d=i-30;}
		else if(i<90) {m=3;d=i-58;}
		else if(i<120) {m=4;d=i-89;}
		else if(i<151) {m=5;d=i-119;}
		else if(i<181) {m=6;d=i-150;}
		else if(i<212) {m=7;d=i-180;}
		else if(i<243) {m=8;d=i-211;}
		else if(i<273) {m=9;d=i-242;}
		else if(i<304) {m=10;d=i-272;}
		else if(i<334) {m=11;d=i-303;}
		else if(i<365) {m=12;d=i-333;}
		if(w==5&&d==13) cout<<m<<endl;
	}
}
