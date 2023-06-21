#include "main.h"
/**
 * print_last_digit - Check numbers
 *
 * @n: An integer input
 *
 * Return: last digit of number l
 *
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
