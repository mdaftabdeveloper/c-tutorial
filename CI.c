#include<stdio.h>

int main()
{
    int p;
    int r;
    int t;
    printf("Enter Principal:");
    scanf("%d",&p);
    printf("Enter Rate:");
    scanf("%d",&r);
    printf("Enter time in years:");
    scanf("%d",&t);
    int x=p(1+r/100)^t;
    int y=p;
    int z=x-y;
    printf("Compound Interest=%d",y);
    return 0;
}