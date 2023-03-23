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
	int prod;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 0; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			prod = i * j;
			
			if (prod <= 9)
			{
				_putchar(' ');
			}
			else
			{
				putchar((prod / 10) + '0');
			}
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
