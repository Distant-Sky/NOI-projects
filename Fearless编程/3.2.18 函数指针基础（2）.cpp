#include<bits/stdc++.h>
using namespace std;
int sum(int a,int b)
{
	return a+b;
}
typedef int (*LP)(int,int);
main()
{
	LP p=sum;cout<<p(2,5);
}
