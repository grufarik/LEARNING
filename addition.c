#include <stdio.h>

/**
 * two numbers to be multiplied
 * user to input two numbers
 * scanf - will scan the location of the values
 * printf - will print the values
 *
 * Return: Always 0 when successful
 */

int main()
{
	int i,j,k;
	printf("enter 2 values");
	scanf("%d",&i);
	scanf("%d",&j);

	k=i+j;
	printf("The addition of %d and %d is %d\n", i,j,k);

	return (0);
}
