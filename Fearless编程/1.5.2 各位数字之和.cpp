#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
main()
{
int a,s=0;
cout<<"������һ������"<<endl;
cin>>a;
while(a>0)
{
	s=s+a%10;
	a=a/10;
}
cout<<s<<endl;
} 
