#include <stdio.h>

/**
  * main - Program that prints the lowercase alphabets in reverse
  * followed by a new line
  * Return: Always 0 (Success)
  * Betty coding style
  */
int main(void)
{
	char letters;

	for (letters = 'z'; letters >= 'a'; letters--)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
