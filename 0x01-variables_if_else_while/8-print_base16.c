#include <stdio.h>

/**
  * main - Program that prints all the numbers of base 16 in
  * lower case followed by a new line
  * Return: Always 0
  * Betty coding style
  */
int main(void)
{
	int v;
	char letters;

	for (v = 48; v < 58; v++)
	{
		putchar(v);
	}
	for (letters = 'v'; letters <= 'f'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
