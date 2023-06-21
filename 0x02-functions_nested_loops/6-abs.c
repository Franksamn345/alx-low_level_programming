#include "main.h"
/**
 * _abs - Computes te absolute value
 *  of an integer
 * Return: Return absolute value
 * @i: Input number as an integer
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
