#include<iostream>
#include<cstdio>
using namespace std;
main()
{
	int a,b,c,d;
	d=0;
	for(a=0;a<20;a++)
	{
	for(b=0;b<33;b++)
	{
	for(c=0;c<100;c++)
	{
	if(a+b+c==100&&5*a+3*b+c/3==100&&c%3==0)
	{
	cout<<a<<" "<<b<<" "<<c<<endl;
	d+=1;
    }
	}	
	}
	} 
	cout<<"¹²"<<d<<"×é½â";
}
