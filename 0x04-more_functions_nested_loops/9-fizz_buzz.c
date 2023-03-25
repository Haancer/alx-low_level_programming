#include <stdio.h>

/**
 * main - where the main prog runs
 * fizz buzz test
 * Return: 0 if prog is successful
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz" );
		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}
