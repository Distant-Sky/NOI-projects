#include<bits/stdc++.h>
using namespace std;
int m,a[11111],x=1,l=1,k=0;
int main()
{
a[1]=1;
cin>>m;
while(x<=m)
{
for(int i=1;i<=l;i++)
{
a[i]*=x; 
a[i]+=k;
k=0;if(a[i]>=10000&&i==l) 
{k=a[i]/10000;a[i]%=10000;l++;} 
else if(a[i]>=1000) 
{k=a[i]/10000;a[i]%=10000;}
}
x++; 
}
cout<<a[l];
for(int i=l-1;i>=1;i--)
{
printf("%04d",a[i]);
}
}
