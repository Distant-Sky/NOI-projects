#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int n,f,i;
	cin>>n;
	f=1;
	for(i=2;i<=sqrt(n)&&f==1;i++)
	{
	if(n%i!=0) f=1;
	else f=0;
	}
	if(f==1)
	{
		cout<<"yes";
	}
	else cout<<"no";	
}
