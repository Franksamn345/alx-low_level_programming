#include "main.h"

/**
 * print_numbers- from 0 to 9
 * Return: Numbers form 0 up to 9
 */
void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
