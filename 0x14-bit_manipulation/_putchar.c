#include "main.h"
#include <unistd.h>
/**
 * _putchar - it writes the character c to stdout
 * @c: character to print
 *
 * Return: On success 1.
 * On error, -1 to be returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
