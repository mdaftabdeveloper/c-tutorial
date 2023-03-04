#include<stdio.h>

int main()
{
    int m;
    printf("Enter marks=");
    scanf("%d",&m);
    if(m>=90&m<=100)
    printf("Out Standing",m);
    else
    {
    if(m>=80&m<=89)
    printf("Excellent",m);
    else
    {
    if(m>=70&m<=79)
    printf("Good",m);
    else
    {
    if(m>=60&m<=69)
    printf("Average, But need improvement");
    else
    {
    if(m>=50&m<=59)
    printf("Must Need Improvement");
    else
    {
    if(m>=40&m<49)
    printf("Mehnat karo babu,  Fail hote hote bache ho");
    else
    {
    if(m<40)
    printf("Better luck next time, Fail ho gye ho babu");
    else
    {
    if(m>100)
    printf("Itna marks nhi aata hai");
    }
    }
    }
    }
    }
    }
    }
    return 0;
}