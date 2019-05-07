#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
main()
{
	int n;
	cin>>n;
for(int i=1;i<n*2;i++)
{
	for(int j=1;j<=abs(n-i);j++)
	{cout<<" ";}
	for(int k=1;k<=2*n-2*abs(n-i)-1;k++)
	{cout<<"*";}
	cout<<endl;
}
}
