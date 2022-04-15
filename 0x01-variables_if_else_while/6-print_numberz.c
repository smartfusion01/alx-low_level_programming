#include <stdio.h>

/**
  *main - Program that prints all single digit numbers of base
  * 10 starting from 0, followed by a new line
  * Return: Always 0 (Success)
  * Betty style coding
  */

int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
