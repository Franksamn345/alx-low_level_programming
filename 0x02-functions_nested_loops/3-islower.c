#include "main.h"
/**
 *  * main: Entry point into the code
 *   * Description: prints "_putchar" to the stdout
 *    * Return 0 (successfull)
 *     */
int _islower(int c)
{
	if(c >= 97 && c >= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
