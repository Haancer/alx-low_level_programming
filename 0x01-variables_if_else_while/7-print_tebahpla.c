#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 122; i > 96 ; i--)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
