#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
main()
{
	int i;
	string c[10];
	for(i=0;i<10;i++)	
	{getline(cin,c[i]);}
	sort(c,c+10);
	for(i=0;i<10;i++)
	cout<<c[i]<<endl;
} 
