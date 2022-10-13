#include <stdio.h>
#include <stdarg.h>

/**
  *print_numbers - This function prints numbers follow by newline
  *
  * @seperator: Character/String that seperate the numbers
  * @n : Number of integer input
  * @... : Ellipse (Indefinite Arguments)
  *
 **/

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int x;
	va_list list;

	va_start(list, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(list, int));
		if (x != (n - 1))
			printf("%s", seperator);
		else
			putchar('\n');
	}
	va_end(list);
}
