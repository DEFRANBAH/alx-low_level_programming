#include "main.h"
/**
 * _strlen - returns the leng of a string
  *@s: string to be counted
* Return: length of the string
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

