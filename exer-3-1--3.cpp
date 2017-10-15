#include"iostream.h"
void main()
{
	int a;
	cin>>a;
	while(a<10)
	{
		cout<<"a<10\n"<<endl;break;
	}
	while(a>=10&&a<=99)
	{
		cout<<"10=<a<=99\n"<<endl;break;
	}
	while(a>=100&&a<=999)
	{
		cout<<"100=<a<=999\n"<<endl;break;
	}
	while(a>=1000)
	{
		cout<<"a>=1000\n"<<endl;break;
	}
}
