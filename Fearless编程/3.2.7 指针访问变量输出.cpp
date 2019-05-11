#include<cstdio>
using namespace std;
int a[101],n;
main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	scanf("%d",&a[i]);
	int *p=&a[1];
	for(int i=1;i<=n;i++)
	{
		printf("%d ",*p);p++; 
	}
}
