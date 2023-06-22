#include "main.h"

/**
 * print_most_numbers- prints the no 0 and 9
 * Description: In exception o 2 and 4
 * Return: the numbers from 0 to 9
 */

void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
