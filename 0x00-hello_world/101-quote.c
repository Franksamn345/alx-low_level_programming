#include <stdio.h>
#include <unistd.h>
/**
 * Main function - Prints a line to the standard error.
 * @return 1 indicating successful execution.
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	write(2, msg, 58);
	write(2, "\n", 1);
	return (1);
}
