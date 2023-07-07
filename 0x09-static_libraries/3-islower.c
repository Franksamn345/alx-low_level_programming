#include "main.h"
/**
 * _islower - Entry point into the code
 *
 * @c: The character in ASCII code
 *
 * Return: lowercase character
 */
int _islower(int c)
{
	if (c >= 97 && c >= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
