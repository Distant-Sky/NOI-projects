#include<cstdio>
using namespace std;
main()
{
	int a[5],i,*pa=a;			//此处pa指向数组a的首地址，即pa=&a[0]
	for(i=0;i<5;i++)
	scanf("%d",pa++);			//pa+i和&a[i]亦通
	for(i=0;i<5;i++)
	printf("a[%d]=%d\n",i,*(a+i)); 
}
