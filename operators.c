#include <stdio.h>

/**
 * Use of mathematical operators
 * Addition - to add numbers (+)
 * Subtraction - to subtract numbers (-)
 * Multiplication - to multiply numbers (*)
 * Division - to divide numbers (/)
 * user to input two numbers
 *
 * Return: Always 0 when successful
 */

int main ()
{
	int i,j,k;
	printf("Enter two values\n");
	scanf("%d %d", &i, &j);
	k=i+j;
	printf("The addition of %d and %d is %d\n", i,j,k);
	
	k=i-j;
	printf("The subtraction of %d and %d is %d\n", i,j,k);

	k=i*j;
	printf("The multiplication of %d and %d is %d\n", i,j,k);

	k=i/j;
	printf("The division of %d and %d is %d\n", i,j,k);

	return (0);
}
