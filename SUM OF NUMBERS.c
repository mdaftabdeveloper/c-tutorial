#include<stdio.h>

int main()
{
    int a,x,y;
    int sum=0;
    printf("Enter starting number=",x);
    scanf("%d",&x);
    printf("Enter ending number=",y);
    scanf("%d",&y);
    for(a=x;a<=y;a++)
    {
    sum=sum+a;
    }
    printf("Sum=%d",sum);
    
    return 0;
}