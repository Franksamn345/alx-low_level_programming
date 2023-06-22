#include "main.h"

/**
 * print_most_numbers- prints the no 0 and 9
 * Description: In exception o 2 and 4
 * Return: the numbers from 0 to 9
 */

void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}
		else
		{
			_putchar(c + '0');
		}
		_putchar('\n');
	}
	return (c);
}
