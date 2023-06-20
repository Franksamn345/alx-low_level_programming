#include <stdio.h>
#include <unistd.h>
/**
 * main -This program prints a line to the standard error
 *
 * Return 1 (successfull)
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, 58);
	write(2, "\n", 1);
	return (1);
}
