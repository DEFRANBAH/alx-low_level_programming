#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - prints the number randomly and return
  *a string  given a certain condition
  *
  *Return: Always 0 (succes)
 */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d is %d", n, abs(n) % 10);
	lastdigit = abs(n) % 10;

	if (lastdigit > 5)
	{
	printf(" and is greater than 5\n");
	}
	else if (lastdigit == 0)
	{
		printf(" and is 0\n");
	}
	else
	{
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
