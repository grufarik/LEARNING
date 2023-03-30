#include <stdio.h>

/**
 * post increment of the second variable
 * @i: the first variable
 * @j: the second variable
 */

int main()
{
	int i=3;
	int j=i++; //the value of j will be increased by one

	printf("%d\n", j);

	return (0);
}
