#include <iostream>
#include<cstdio>
using namespace std;
main()
{
int a,s=1;
cout<<"������һ������"<<endl;
cin>>a;
while(a>=10)
{
	a=a/10;
	s++;
}
cout<<s<<"λ��"<<endl;
} 
