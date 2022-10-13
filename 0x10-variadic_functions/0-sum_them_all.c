#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all- returns the sum of all it parameter
  *
  * @n : Constant Unsigned integer varible
  * @... : Ellipse (Indefinite variable)
  *
  * Return: integer (Sum of the variable)
  *
 **/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x, sum = 0;
	va_list list;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (x = 0; x < n; x++)
	{
		sum = sum + va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
