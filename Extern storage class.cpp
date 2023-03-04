// Example for exter storage class

#include<stdio.h>
 int main()
  {
  	extern int m,n;
  	void sample();
  	m=5;
  	n=10;
  	sample();
  	printf("\n Value of m= %d and n=%d",m,n);
  	return 0;
  }
  
   void sample()
    {
    	extern int m,n;
    	printf("\n Value of m=%d and n=%d",m,n);
    	m=m+10;
    	n=n+10;
	}
