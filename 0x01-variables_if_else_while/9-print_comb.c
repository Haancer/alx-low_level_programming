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

	for (i = 48; i < 58 ; i++)
	{
		putchar(i);
		putchar(44);
		putchar(32);
	}

	putchar('\n');
	return (0);
}
