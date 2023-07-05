#include "main.h"

/**
 * factorial- a function that returns
 * the factorial of a given number.
 * @n: character to be returned
 * Return: Nothing
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
