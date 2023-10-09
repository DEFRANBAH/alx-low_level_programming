#include <stdio.h>

/**
  *main - Prints the possible stes of two two numbers distinctively
  *
  *Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			int m = i / 10;
			int n = i % 10;
			int o = j / 10;
			int p = j % 10;

			putchar(m + '0');
			putchar(n + '0');
			putchar(' ');
			putchar(o + '0');
			putchar(p + '0');
			if (!(i == 98 && j == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
