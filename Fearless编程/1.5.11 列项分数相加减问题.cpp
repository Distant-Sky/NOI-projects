#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
main()
{
	int n;
	double f,a,i;
	f=0;
	a=1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		f=(double)(a/i+f);
		a=-a;
	}
	cout<<f;
}
