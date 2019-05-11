#include<bits/stdc++.h>
using namespace std;
void sw(int *x,int *y)
{
	int t=*x;
	*x=*y;*y=t;
}
void sort(int *x,int *y,int *z)
{
	if(*x>*y) sw(x,y);
	if(*x>*z) sw(x,z);
	if(*y>*z) sw(y,z);
}
main()
{
	int a,b,c;
	cin>>a>>b>>c;
	sort(&a,&b,&c);
	printf("%d %d %d",a,b,c);
}
