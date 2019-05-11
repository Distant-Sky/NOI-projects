#include<iostream>
using namespace std;
int k=0,n;
void hanoi(int n,char a,char c,char b)
{
	if (n==0) return;
	hanoi(n-1,a,b,c);
	k++;
	cout<<k<<a<<"-->"<<c<<endl;
	hanoi(n-1,b,c,a);
}
main()
{
	cin>>n;
	hanoi(n,'a','c','b');
}
