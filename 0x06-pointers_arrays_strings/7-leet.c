#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 * I'm just laughin', could've been a pimp the way I move my lips
 * You got some nerve, your shit on the curb, boy we put in work
 * From 64th, and from 65th, we not from 63rd
 */
char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == s[i])
				s[i] = b[j];
		}
	}
	return (s);
}
/* crazy story remix and part 123 back to back... huh what? */
