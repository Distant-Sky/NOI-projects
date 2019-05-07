#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
main()
{
	int a,i,t;
	a=0;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		if(i%10==1) a++;
		if(i%100/10==1) a++;
		if(i%1000/100==1) a++;
		if(i%10000/1000==1) a++;
		if(i==10000) a++;
	}
	cout<<a;
}
