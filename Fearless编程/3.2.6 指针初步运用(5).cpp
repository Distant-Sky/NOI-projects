#include<iostream>				//关联1.12.3、1.12.4传值，传址调用 
using namespace std;
int  swap(int *x,int *y)
{
	int t;
	t=*x;*x=*y;*y=t;			//此处对数值进行操作，地址没变 
}
main()
{
	int a,b;
	cin>>a>>b;
	swap(&a,&b);
	cout<<a<<" "<<b;
}
