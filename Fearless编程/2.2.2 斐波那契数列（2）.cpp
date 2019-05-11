#include<iostream>
using namespace std;
int fib(long long int n)
{
	if(n==1||n==2) return 1;
	else return fib(n-1)+fib(n-2);
}
main()
{
	long long int n;
	cin>>n;
	cout<<fib(n);
}
