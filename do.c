#include <stdio.h>

/**
 * do: do_while loop is a loop that executes a block of code at least once,
 * and then repeats the execution of the block of code until a certain
 * condition is met
 *
 * Return: Always 0 when successful
 */

int main()
{
	int i=1;
	do
	{
		printf("Moonlight\n");
		i++;
	}
	while (i<=7);

	return (0);
}
