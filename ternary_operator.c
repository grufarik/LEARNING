#include <stdio.h>

/**
 * Ternary operator using (?)and(:)
 * if (i) is true the value after question mark'?' will be executed
 * if not, the value after colon':' will be executed
 */

int main()
{
	int i=1;
	int j=0;
// if(i==1)
//   j=5;
//   else
//     j=6;

	j = i==1?5:6;
	printf("%d\n", j);
}
