//consider the following program to understand the use of auto storage class variables

#include<stdio.h>
 int main()
  {
  	void sample(void);
  	auto int m=40;
  	/* consider an inner block */
  	 {
  	 	auto int m=50;
  	 	printf("\n Value of m in inner block is %d",m);
	 }
	 /*calling the function*/
	   sample();
	   printf("\n Value of m in outer block is %d",m);
	   return 0;
  }
  
   void sample(void)
    {
    	auto int m=65;
    	printf("\n Value of m in function block is %d",m);
	}
