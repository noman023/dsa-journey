#include<stdio.h>

int main()
{
    const double PI = 3.141592653;
    double r;
    scanf("%lf", &r);

    printf("%.9f", PI * r*r);
    return 0;
}