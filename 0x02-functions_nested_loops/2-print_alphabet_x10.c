#include "main.h"

/**
  * print_alphabet_x10 - Check main.h
  * Description: function uses _putchar function to print
  * alphabet in lowercase 10 times
  * Return: Nothing.
  * Betty style coding
  */

void print_alphabet_x10(void)
{
	char c;
	int d;

	for (d = 0; d < 10; d++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
