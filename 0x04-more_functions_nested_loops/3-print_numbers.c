#include "main.h"

/**
 * print_numbers- from 0 to 9
 * Return: Numbers form 0 up to 9
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_puchar(c);
	}
	_putchar('\n');
}
