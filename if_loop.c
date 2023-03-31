#include <stdio.h>

/**
 * using if, else if, and else.
 * we will ccheck which number is greater between three variables
 * followed by a new line ("\n")
 * @a: the first variable to be checked
 * @b: the second variable to e checked
 * @c: the third variable to be checked.
 *
 * Return: ALways 0 when successful
 */

int main()
{
	int a=7,b=12,c=9;

	if (a>b && a>c)
	{ printf("%d is greater\n", a);
	}
	else if (b>c)
	{
		printf("%d is greater\n", b);
	}
	else
	{
		printf("%d is greater\n", c);
	}

	return (0);
}
