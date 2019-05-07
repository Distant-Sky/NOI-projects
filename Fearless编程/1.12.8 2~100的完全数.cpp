#include<iostream>
using namespace std;
bool com(int a)
{
	int s=0;
	for(int i=1;i<a;i++)
	{
		if(a%i==0)s+=i;
	}
	if(s==a) return true;
	else return false;
}
main()
{
	int i;
	for(i=2;i<101;i++)
	{
		if(com(i)==true) cout<<i<<" ";
	}
}
