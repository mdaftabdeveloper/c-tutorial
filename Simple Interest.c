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
    int s=p*r*t;
    int x=s/100;
    printf("Simple Interest=%d\n",x);
    int y=p+x;
    printf("Required Amount=%d",y);
    
    return 0;
}