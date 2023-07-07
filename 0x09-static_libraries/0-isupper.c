#include "main.h"
/**
 * _isupper- Check if a letter is upper
 * @c: The num to be checked
 * Return: 1 for upper letter and 0 for other
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
