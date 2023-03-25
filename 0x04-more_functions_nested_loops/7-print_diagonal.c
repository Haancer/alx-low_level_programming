#include "main.h"
/**
*print_diagonal - print slash
*@n: number of slashes to print
*/

void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
			break;
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
