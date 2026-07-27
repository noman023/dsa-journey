#include<stdio.h>

int main()
{
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    long long max, mid, min;

    if(a >= b && a>= c){
        max = a;
    }
    else if(b>=a && b>=c){
        max = b;
    }
    else{
        max = c;
    }

    if(a <= b && a<= c){
        min = a;
    }
    else if(b<=a && b<=c){
        min = b;
    }
    else{
        min = c;
    }

    mid = a + b + c - min - max;

    printf("%lld\n%lld\n%lld\n", min, mid, max);
    printf("\n");
    printf("%lld\n%lld\n%lld\n", a, b, c);
    return 0;
}