#include <stdio.h>
/**
 * main - A prog. thats prints the size of types of a computer that it is on
 * return: 0 (success)
 */
int main(void)
{
printf("Size of a char: %lu bytes(s)\n", sizeof(char));
printf("Size of an int: %lu bytes(s)\n", sizeof(int));
printf("Size of a long int: %lu bytes(s)\n", sizeof(long int));
printf("Size of a long long int: %lu bytes(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}
