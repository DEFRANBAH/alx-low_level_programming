#include <stdio.h>
#include <string.h>
/**
  *main - Prints sets of two posssible combination numbers
  *
  *Return: Always 0 (success)
*/
int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(m);
				putchar(n);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
