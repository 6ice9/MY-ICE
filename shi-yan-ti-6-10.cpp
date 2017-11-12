#include <stdio.h>
float fun(double h);
int main(void)
{
    double n;

    scanf("%lf",&n);
    printf("%.2lf\n",fun(n));

    return 0;
}
float fun(double h)
{
    double m;

    m = h - (int)h;
    if (m / 100.0 >= 0.005)
    return (int)h + m / 100.0 + 0.01;
    return h;
}