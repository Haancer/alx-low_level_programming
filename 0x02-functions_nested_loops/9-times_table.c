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

	for (i = 0; i <= 9; i++)
	{
		for (j =0; j <= 9; j++)
		{
			_putchar(i * j);
			_putchar(32);
			_putchar(44);
		}
		_putchar('\n');
	}
}
