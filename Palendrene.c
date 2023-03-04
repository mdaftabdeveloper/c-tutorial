#include<stdio.h>

int main()
{
    int x,r;
    int rx=0;
    printf("Enter Number=");
    scanf("%d",&x);
    
    int n=x;
    
    while(x>0)
    {
    r=x%10;
    x=x/10;
    rx=rx*10+r;
    }
    
    if(n==rx)
    {
    printf("The no.is Palendrome");
    
    }
    else
    {
    printf("The no. is not Palendrome");
    }
    return 0;
}
