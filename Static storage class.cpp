// Example for static storage class

#include<stdio.h>
 int main()
  {
  	
  	printf("\n First function call");
  	void sample();
  	printf("\n Second function call");
  	sample();
  	return 0;
  }
  
   void sample()
    {
    	static int m=5,n=10;
    	m=m+10;
    	n=n+10;
    	printf("\n Value of m=%d and n=%d",m,n);
	}
 
