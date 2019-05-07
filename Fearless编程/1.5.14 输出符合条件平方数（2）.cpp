#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
main()
{
	int n,x;
	for(x=32; ;x++)
	{
		n=x*x;
		if(n>9999) break;
		if(n<1000) continue;
		int a=n/100;
		int b=n%100;
		if(a/10==a%10&&b/10==b%10) cout<<n;
	}	
}
