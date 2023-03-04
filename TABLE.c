#include<stdio.h>

int main()
{
    int i,y,x;
    printf("Enter number=");
    scanf("%d",&x);
    for(i=1;i<=10;i++)
    {
    y=x*i;
    printf("%d*%d=%d\n",x,i,y);
    }
    return 0;
}