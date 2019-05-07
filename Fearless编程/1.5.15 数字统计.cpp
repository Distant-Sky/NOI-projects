#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
main()
{
	int b,t,a,n,i;
	a=0;
	cin>>b>>t;
	for(i=b;i<=t;i++)
	{
		if(i%10==2) a++;
		if(i%100/10==2) a++;
		if(i%1000/100==2) a++;
		if(i%10000/1000==2) a++;
		if(i%100000/10000==2) a++;
	}
	cout<<a;
}
