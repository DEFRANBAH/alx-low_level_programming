#include "main.h"

/**
  * swap_int - swaps the value of two integers
  *@a: value 1
  *@b: value 2
  *Return: void
  */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

