#include <unistd.h>
#include "main.h"

/**
  * main - Program that prints out _putchar, followed by a new line
  * Return: 0.
  * Betty coding style
  */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}i
