#include <stdio.h>
#include <string.h>
/**
  *main - Prints alphabet in reverse order
  *
  *Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
