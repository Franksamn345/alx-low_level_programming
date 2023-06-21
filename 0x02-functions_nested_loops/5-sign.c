#include "main.h"
/**
 * print_sign - Entry point into the code
 * Greater, equals,less than,zero 
 * Return: 1 is greater than zero, zero is 
 * -1 is graeter than zero 
 * @n: The character in ASCII code
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
