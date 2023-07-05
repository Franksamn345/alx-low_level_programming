#include "main.h"

/**
 * int _strlen_recursion- a function that
 * returns the length of a string.
 * @s: character to be returned
 * Return: Nothing
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return(1 + _strlen_recursion(s + 1));
	return (0);

}
