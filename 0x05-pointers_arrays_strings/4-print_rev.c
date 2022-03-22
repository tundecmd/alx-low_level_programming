#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string
 */
void print_rev(char *s)
{
	int i = 0;
	int len;
	/* Get the length of the string */

	for (len = 0; s[len] != '\0'; len++)
	{
		_putchar(s[i]);
		_putchar('\n');
	}
}
