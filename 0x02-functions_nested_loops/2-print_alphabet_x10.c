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

	for (i  = 0; i <= 9; i++)
	{
		for (k = 97; k <= 122; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
