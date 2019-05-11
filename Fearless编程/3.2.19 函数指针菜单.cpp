#include<iostream>
using namespace std;
void t1(){cout<<" test1 ";}
void t2(){cout<<" test2 ";}
void t3(){cout<<" test3 ";}
void t4(){cout<<" test4 ";}
void t5(){cout<<" test5 ";}
typedef void(*LP)();
main()
{
	LP a[6]={0,t1,t2,t3,t4,t5};
	int x;
	cin>>x;
	a[x]();
}
