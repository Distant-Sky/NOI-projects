#include<iostream>
using namespace std;
bool check(int n,int d)
{
	while(n)
	{
		int e=n%10;
		n/=10;
		if(e==d)
		return true;
	}
	return false;
}
main()
{
	int a,b;
	cin>>a>>b;
	if(check(a,b)==true) cout<<"数字"<<b<<"有在数字"<<a<<"中出现";
	else cout<<"数字"<<b<<"没有在数字"<<a<<"中出现";
}
