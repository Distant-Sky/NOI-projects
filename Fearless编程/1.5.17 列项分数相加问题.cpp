#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
main()
{
	double f,i;
	int k;
	cin>>k;
	f=0;
	i=1;
	while(i>0)
	{
		f=(double)(1/i+f);
		if(f>k) break;
		i++;
	}
	cout<<i;
}
