#include "main.h"
/**
* print_last_digit - prints last number
*
*@a: an inter input
*
*Return: returns 0 if prog runs smoothly
*/

int print_last_digit(int a)
{
	int i;

	i = a % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
