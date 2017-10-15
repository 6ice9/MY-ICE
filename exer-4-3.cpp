#include<iostream.h>
void main()
{
	int a,b,n=0;
	cin>>a;
	b=a;
	while(1)
	{
		if(b%2==0)
		{
			b=b/2;
			n++;
			cout<<b<<"-";
			if(b==1)
				break;
		}
		else
		{
			b=b*3+1;
			n++;
			cout<<b<<"-";
		}
	}
	cout<<"\t"<<"²½Öè:"<<n<<endl;
}