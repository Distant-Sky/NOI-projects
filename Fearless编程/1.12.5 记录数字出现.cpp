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
	if(check(a,b)==true) cout<<"����"<<b<<"��������"<<a<<"�г���";
	else cout<<"����"<<b<<"û��������"<<a<<"�г���";
}
