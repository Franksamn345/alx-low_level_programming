#include <stdio.h>
#include <unistd.h>
/**
 * main- Entry to the code
 *Return:1
 *
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, 58);
	write(2, "\n", 1);
	return (1);
}
