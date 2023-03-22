#include "main.h"
/**
* _isalpha - output is 1 if at
*
* @c: Character in ASCII code
*
*Return: returns 0 if prog runs smoothly
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
