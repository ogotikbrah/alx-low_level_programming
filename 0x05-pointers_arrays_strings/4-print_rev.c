#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: Pointer to the string to print
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0') /* Find the length of the string */
	len++;

	for (int i = len - 1; i >= 0; i--) /* Iterate over the string backwards */
	_putchar(s[i]);

	_putchar('\n'); /* Print a newline at the end */
}
