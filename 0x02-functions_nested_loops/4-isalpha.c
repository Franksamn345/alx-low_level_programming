#include "main.h"
/**
 * _isalpha - Entry point into the code
 * lowercase character. Another cases, shows
 * 0
 * Return: 0 (successfull)
 * @c: The character in ASCII code
 */
int  _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
