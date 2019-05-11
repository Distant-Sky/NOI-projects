#include<bits/stdc++.h>
using namespace std;
int n,a[8888];
bool is(int n)
{
	if(n<2) return false;
	if(n==2) return true;
	for(int i=2;i<=sqrt(n);i++)
	if(n%i==0) return false;
	return true; 
}
int* find()
{
	for(int i=1;i<=n;i++)
	if(is(a[i]))
	return &a[i];
	return NULL;
}
main()
{
	cin>>n;
	int i;
	for(i=1;i<=n;i++)
	cin>>a[i];
	int *p=find();
	if(p!=NULL)
	printf("%d\n%d\n ",p,*p);
	else printf(" can't find! ");
}
