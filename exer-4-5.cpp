#include<stdio.h>
int main()
{ 
	int a,b,c;
	b=10;
	for (a=1;a<=99;a++)
	{
		if (a==c)
			c*=10;
		b=a*a;
		if(b%c==a)
			printf("%ld\t%ld\n",a,b);
	}
}