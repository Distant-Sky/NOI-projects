#include<iostream>
using namespace std;
main()
{
	int a=1,b=1,c,i,n;
	cin>>n;
	for(i=1;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	cout<<a;
}
