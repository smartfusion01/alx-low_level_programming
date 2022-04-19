#include "main.h"

/**
  *_abs - Check main
  * @x: An integer input
  * Description: This function returns absolute value of a number
  * Return: Absolut value of number x
  * Betty coding style
  */
int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (x * -1);
}
