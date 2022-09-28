#include "main.h"

/**
  * factorial - Returns the factorial of a given number
  *
  * @n : Integer variable
  *
  * Return: integer varible (Factorial of n)
  *
 **/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if ((n == 1) || (n == 0))
		{
			return (1);
		}
		return (n * factorial(n - 1));
	}
}
