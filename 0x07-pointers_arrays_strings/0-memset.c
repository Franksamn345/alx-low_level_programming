#include "main.h"

/**
 * _memset - a function that fills memory with constant bytes
 * @s: location to fill
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: returns pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n) /* The function _memset is defined with three parameters: s, which is a pointer to the memory location to be filled, b, which is the constant byte to fill the memory with, and n, which represents the number of bytes to fill.*/
{
	char *start = s; /*This line declares a character pointer start and initializes it with the value of s. This pointer will be used to keep track of the starting location of the memory block.*/

	while (n--) /*This loop iterates n times, decrementing the value of n with each iteration*/
	{
		*s = b; /*Inside the loop, the value of b is stored at the memory location pointed to by s*/
		s++; /* then s is incremented to point to the next memory location. This process continues until n reaches zero.*/
	}
	return (start);
}
