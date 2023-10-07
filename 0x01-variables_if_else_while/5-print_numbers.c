#include <stdio.h>
#include <stdlib.h>

/**
  *main - Prints numbers from 0 to 9
  *
  *Return:Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
