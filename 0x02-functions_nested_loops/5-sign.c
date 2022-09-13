#include "main.h"

/**
	* print_sign - prints the sign of an integer
	*
	* @n: integer number
	*
	* Return: val (zero or one)
	*
	**/

int print_sign(int n)
{
	int val;

	if (n > 0)
	{
		_putchar('+');
		val = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		val = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		val = -1;
	}
return (val);
}
