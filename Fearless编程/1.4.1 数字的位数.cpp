#include <iostream>
#include<cstdio>
using namespace std;
main()
{
int a;
cout<<"������һ��������,��Enterȷ��"<<endl;
cin>>a;
if(a<0||a>999999999) cout<<"error!"<<endl;
else if(a<10) cout<<"һλ��"<<endl;
else if(a<100) cout<<"��λ��"<<endl;
else if(a<1000) cout<<"��λ��"<<endl;
else if(a<10000) cout<<"��λ��"<<endl;
else if(a<100000) cout<<"��λ��"<<endl;
else if(a<1000000) cout<<"��λ��"<<endl;
else if(a<10000000) cout<<"��λ��"<<endl;
else if(a<100000000) cout<<"��λ��"<<endl;
else if(a<1000000000) cout<<"��λ��"<<endl;
} 
