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
	char name[] = "KINGSLEY";

	for (int i = 0; i < strlen(name) ; i++)
	{
		name[i] = tolower(name[i]);
		putchar(name[i]);
	}

	putchar('\n');
	return (0);
}
