#include "main.h"
/**
* times_table - 9 times table
*
*Return: returns 0 if prog runs smoothly
*/
void times_table(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			_putchar(i * j);
			_putchar(32);
			_putchar(44);
		}
		_putchar('\n');
	}
}
