#include<iostream>
using namespace std;
void sw(int a,int b)
{
	int t=a;a=b;b=t;
}
main()
{
	int a,b;
	cin>>a>>b;
	sw(a,b);
	cout<<a<<" "<<b;
}
