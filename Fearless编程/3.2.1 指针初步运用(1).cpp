#include<iostream>		//关联1.12.3、1.12.4传值，传址调用 
using namespace std;
int  swap(int &a,int &b)
{
	int t;
	t=b;b=a;a=t;
}
main()
{
	int a,b;
	cin>>a>>b;
	swap(a,b);
	cout<<a<<" "<<b;
}
