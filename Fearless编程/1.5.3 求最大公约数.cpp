#include<iostream>
using namespace std;
main()
{
	int m,n,r;
	cin>>m>>n;
	while(m%n!=0)
	{
	r=m%n;
	m=n;
	n=r;
	}
	cout<<n;
}
