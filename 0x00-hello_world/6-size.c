#include <stdio.h>
/**
 * main  - where the main prgrm runs
 * Return: returns 0 is prog is succesful
 */

int main(void)
{
	printf("Size of Char: %lu byte(s)\n", sizeof(char));
	printf("Size of Int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	return (0);
}