#include "main.h"
/**
 * print_alphabet- Entry point into the code
 * Description: prints "_putchar" to the stdout
 * Return: 0 (successfull)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
