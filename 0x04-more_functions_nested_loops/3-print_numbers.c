#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print from 0 - 9
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	putchar('\n');
}
