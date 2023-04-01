#include <stdio.h>

/**
 * Array: is a collection of similar type of elements
 * arrays start to count from 0 not 1
 */

int main()
{
	// for instance: int a=1,b=2,c=3,d=4;
         // we will store the four values in one variable.

	int z[4];
       	/* this means z-> [1,2,3,4]
                           0,1,2,3  
                	   */
	int i; /* we have introdused the integer 'i' so as to print all the values
		  */
	z[0]=1;
	z[1]=2;
	z[2]=3;
	z[3]=4;
	
	/*we will have to include "for loop" so as to print all
	the 4 values
	*/

	for (i=0; i<=3; i++)
	{
		printf("%d\n", z[i]);
	}

	return (0);
}
