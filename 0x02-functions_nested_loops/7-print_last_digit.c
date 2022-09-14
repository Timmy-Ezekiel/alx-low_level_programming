#include "main.h"

/**
	* print_last_digit - Print the last digit of a number
	*
	* @x: integer parameter
	*
	* Return: returns the last digit
	*
	**/

int print_last_digit(int x)
{
	int y, z;

	if (x < 0)
	{
		z = x * -1;
		y = z % 10;
	}
	else
	{
		y = x % 10;
	}
	_putchar(y + '0');
	return (y);
}
