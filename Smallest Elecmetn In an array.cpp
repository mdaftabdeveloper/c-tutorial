#include<stdio.h>
int main()
{
	int arr[5],min=arr[0];
	for(int i=0; i<5; i++)
	{
	printf("Enter the element for the index %d:",i);
	 scanf("%d",&arr[i]);
    }
    for(int i=1;i<5;i++)
    {
    	if(arr[i]<min)
    	{
    		min=arr[i];
		}
	}
	printf("Smallest Element is %d:",min);
	 return 0;
    
}
