#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - a function that print all alphabets in lower case
 * Return: void
 **/
void print_alphabet(void)
{
  int alpha;

  for (alpha = 'a'; alpha <= 'z'; alpha++)
  {
    _putchar(alpha);
  }
  _putchar('\n');
}