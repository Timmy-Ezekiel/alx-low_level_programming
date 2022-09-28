#include "main.h"

int _sqrt_function(int n, int x);

/**
  *_sqrt_recursion - Return natural square root of a number
  *
  * @n : interger varible
  *
  * Return: Square root of n
  *
 **/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_function(n, 0));
}

/**
  *_sqrt_function - Returns square root value if any.
  *
  * @n : Integer variable
  * @x : interger varible
  *
  *Return: integer
  *
 **/

int _sqrt_function(int n, int x)
{
	if ((x * x) == n)
		return (x);
	if ((x * x) > n)
		return (-1);
	return (_sqrt_function(n, x + 1));
}
