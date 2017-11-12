#include <stdio.h>
double fun(int n)
{
	double s=0,m=0;
	int i;
	for(i=1;i<=n;i++)
	{
		m+=i;
		s+=1.0/m;
	}
	return s;
}
void main()
{
	int n;
	printf("ÊäÈënÖµ:");
	scanf("%d",&n);
	printf("%lf\n",fun(n));
}
