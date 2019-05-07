#include<iostream>
#include<cmath>
using namespace std;
bool ss(int a)
{
	if(a<2) return false;
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0) return false;
	}
	return true;
}
main()
{
	int a,i,s=0;
	cin>>a;
	for(i=2;i<=a;i++)
	{
		if(ss(i)==true) s++;
	}
	cout<<s;
}
