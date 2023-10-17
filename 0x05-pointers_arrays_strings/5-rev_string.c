#include "main.h"
#include <stdio.h>

/**
  * rev_string - reverses a string.
  *@s: string to be reversed
  *Return: void
  */

void rev_string(char *s)
{
	int length = 0;
	int i;

	if (s == NULL)
	{
		return;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; i < length / 2; i++)
	{
		char temp = s[i];

		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
