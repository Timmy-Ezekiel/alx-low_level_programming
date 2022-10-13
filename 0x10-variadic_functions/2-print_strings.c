#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
  *print_strings - Prints string to the Standard output
  *
  *@seperator: Character/String that seperate
  *@n: Integerr(Number of strings)
  *@... : Indefinite String Variables
  *
 **/

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int x;
	va_list list;

	va_start(list, n);
	for (x = 0; x < n; x++)
	{
		printf("%s", va_arg(list, char *));
		if (x != (n - 1))
			printf("%s", seperator);
		else
			putchar('\n');
	}
}
