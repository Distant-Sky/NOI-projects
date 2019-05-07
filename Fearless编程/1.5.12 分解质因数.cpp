#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
main()
{
	unsigned int n;
	int i,a;
	cin>>n;
	cout<<"n=";
	for(i=2;i<=n;i++)
	{
		a=2;
		if(n%a==0)
		{
			cout<<a<<"*";
			n=n/a;
		}
		else a++;
	}
	cout<<n;
}
