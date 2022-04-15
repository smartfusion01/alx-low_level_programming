#include <stdio.h>

/**
  * main - prints the alphabet in lowercase,
  * followed by a new line
  * Return: Always 0 (Success)
  * Betty style coding
  */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
