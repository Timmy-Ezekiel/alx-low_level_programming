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
	char *str;

	va_start(list, n);
	for (x = 0; x < n; x++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if ((x != (n - 1)) && (seperator != NULL))
			printf("%s", seperator);
		else if (x == (n - 1))
			putchar('\n');
	}
}
