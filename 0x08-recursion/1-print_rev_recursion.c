#include <stdio.h>

/**
  * _print_rev_recursion - Prints reverse of a string
  *
  * @s : string pointer
  *
 **/

void _print_rev_recursion(char *s)
{
	if ((*s == '\0'))
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
