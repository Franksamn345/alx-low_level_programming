#include "main.h"
/**
 * print_alphabet_x10- Entry point into the code
 * Description: prints "_putchar" to the stdout
 * Return 0 (successfull)
 */
void print_alphabet_x10(void)
{
	int i;
	int l;
	
	for (i = 1; i <= 10; i++)
	{
		for (l = 97; l <= 122; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
