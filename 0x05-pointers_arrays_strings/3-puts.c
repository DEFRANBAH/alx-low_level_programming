#include "main.h"
#include <stdio.h>
/**
  * _puts - prints a string, followed by a new line, to stdout
  *@str: string to be printed
  *Return: void
  */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	(void)putchar('\n');
}
