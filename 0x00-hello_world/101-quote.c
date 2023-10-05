#include <unistd.h>
/**
 *main - Entry point
 *Return: Always 1 (success)
 */
int main(void)
{
const char *m = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
/*Write the message to the standard error(file decripter 2)*/
	write(2, m, 60);
	return (1);
}
