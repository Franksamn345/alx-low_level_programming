#include "main.h"
/**
 * _islower - Entry point into the code
 * lowercase character. Another cases, shows
 * Return: lowercase character,0 Another cases, shows 
 * @c: The character in ASCII code
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
