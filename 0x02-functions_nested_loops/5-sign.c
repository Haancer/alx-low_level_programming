#include "main.h"
/**
* print_sign -determines if a number is greater than, equal to or less 0
*
* @n: Input number as  Int
*
*Return: returns 0 if prog runs smoothly
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
