#include<cstdio>			//�������Ҫ�� 
using namespace std;
main()
{
	int n,i,*a;				//����ָ�����a�������ֱ�ӵ�����ʹ�� 
	scanf("%d",&n);
	a=new int[n+1];			//��ϵͳ������������n+1��int�͵Ŀռ� 
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);		//�˴�ֱ�ӵ�����ʹ�� 
	for(i=2;i<=n;i++)
	a[i]+=a[i-1];			//������һ���������ڴ浥Ԫ����ַ��ֱ�ӼӼ� 
	for(i=1;i<=n;i++)
	printf("%d ",a[i]);
}
