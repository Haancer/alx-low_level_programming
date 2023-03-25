#include "main.h"
/**
*print_diagonal - print slash
*@n: number of slashes to print
*/

void print_diagonal(int n)
{
	int i;
	int j;
	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			break;
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
