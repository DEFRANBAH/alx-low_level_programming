#include <stdio.h>
/**
  *main - prints alpabet to the console
  *
  *Return: Always 0
  */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
		int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
