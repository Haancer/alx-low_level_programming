#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes a character out
 *
 * @c: Character parameter to print
 *
 * Return: return 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
