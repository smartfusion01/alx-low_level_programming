#include <stdio.h>

/**
  * main - prints alphabets in both lower case and uppercase
  * then adds a new line
  * Return: Always 0 (success)
  */
int main(void)
{
	int letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		putchar(letters);
	for (letters = 'A'; letters <= 'Z'; letters++)
		putchar(letters);
	putchar('\n');
	return (0);
}
