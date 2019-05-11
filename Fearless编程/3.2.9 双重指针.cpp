#include<cstdio>
using namespace std;
int a=10;
int *p;
int **pp;
main()
{
	p=&a;
	pp=&p;
	printf("%d=%d=%d\n",a,*p,**pp);
}
