#include "main.h"
/**
 * print_alphabet_x10 - print alpha ten times
 *
 *Return: returns 0 if prog runs smoothly
 */
void print_alphabet_x10(void)
{
	int i;
	int k;

	for (k  = 1; i <= 10; i++)
	{
		for (k = 10; k <= 122; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
