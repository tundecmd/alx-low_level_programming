#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 * then in uppercase followed by a new line
 * Return: return 0 if success
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
