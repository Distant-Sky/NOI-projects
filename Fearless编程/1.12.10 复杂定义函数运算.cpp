#include<iostream>
using namespace std;
double max(double a,double b,double c)
{
	if(a<b) a=b;
	if(a<c) a=c;
	return a;
}
int main()
{
	double a,b,c,m;
	cin>>a>>b>>c;
	m=max(a,b,c)/(max(a+b,b,c)*max(a,b,b+c))*1.0;
	cout<<m;
}
