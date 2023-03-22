#include "main.h"
/**
* _islower - output is 1 if a is lower alphabet
*
* @c: Character in ASCII code
*
*Return: returns 0 if prog runs smoothly
*/

int _isalpha(int c)
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
