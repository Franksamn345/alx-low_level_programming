#include "main.h"

/**
 * _strncpy - a function that copys the strings.
 *
 * @dest: an input string
 *
 * @src: an input string
 *
 * @n: an input integer
 *
 * Return: A pointer to the resulting string
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
