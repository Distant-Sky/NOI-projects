#include<bits/stdc++.h>
using namespace std;
int t(int a)
{
	return a;
}
main()
{
	cout<<t<<endl;		//��ʾ������ַ 
	int (*p)(int a);	//���庯��ָ�����p 
	p=t;				//������t�ĵ�ַ��ֵ��ָ��p 
	cout<<p(5);			//�ɽ�p��Ϊ��*p�� 
}
