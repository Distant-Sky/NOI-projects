#include<cstdio>
using namespace std;
main()
{
	int a[5],i,*pa=a;			//�˴�paָ������a���׵�ַ����pa=&a[0]
	for(i=0;i<5;i++)
	scanf("%d",pa++);			//pa+i��&a[i]��ͨ
	for(i=0;i<5;i++)
	printf("a[%d]=%d\n",i,*(a+i)); 
}
