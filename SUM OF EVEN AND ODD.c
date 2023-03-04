#include<stdio.h>

int main()
{
    int a,x,y;
    int esum=0;
    int osum=0;
    printf("Enter starting number=",x);
    scanf("%d",&x);
    printf("Enter ending number=",y);
    scanf("%d",&y);
    for(a=x;a<=y;a++)
    if (a%2==0)
    {
    esum=esum+a;
    }
    else if(a%2!=0)
    {
    osum=osum+a;
    }
    printf("Even Sum=%d\n",esum);
    printf("Odd Sum=%d",osum);
    return 0;
}