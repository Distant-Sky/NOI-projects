#include<bits/stdc++.h>
using namespace std;
main()
{
	int a,b,s,t,*x,*y;
	x=&a;y=&b;
	a=10;b=20;
	s=*x+*y;
	t=*x**y;
	printf("a=%d,b=%d\n",*x,*y);
	printf("s=%d,t=%d\n",s,t);
}
