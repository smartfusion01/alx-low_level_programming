#include <stdio.h>

/**
  * main - a program that prints the alphabet in lowercase,
  * followed by a new line.
  * Return: Always 0 (Success)
  * Betty style coding
  */
int main(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		if (letters != 'e' && letters != 'q')
		{
			putchar(letters);
		}
		letters++;
	}
	putchar('\n');
	return (0);
}
