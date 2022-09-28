#include "main.h"

/**
  * _pow_recursion - return value of x raise to power y
  *
  * @x : subscript integer to accept power
  * @y : number to be powered by
  *
  * Return: power or x by y
  *
 **/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		if (y == 1)
		{
			return (x);
		}
		return (x * _pow_recursion(x, (y - 1)));
	}
}
