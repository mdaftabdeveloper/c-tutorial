#include<stdio.h>

int main()
{
    int x,r;
    int rx=0;
    printf("Enter Number=");
    scanf("%d",&x);
    
    while(x>0)
    {
    r=x%10;
    x=x/10;
    rx=rx*10+r;
    }
    printf("Reverse of %d=%d",x,rx);
    return 0;
}