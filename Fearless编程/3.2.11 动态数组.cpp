#include<cstdio>			//这个很重要！ 
using namespace std;
main()
{
	int n,i,*a;				//定义指针变量a，后面可直接当数组使用 
	scanf("%d",&n);
	a=new int[n+1];			//向系统申请了连续的n+1个int型的空间 
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);		//此处直接当数组使用 
	for(i=2;i<=n;i++)
	a[i]+=a[i-1];			//数组是一个连续的内存单元，地址可直接加减 
	for(i=1;i<=n;i++)
	printf("%d ",a[i]);
}
