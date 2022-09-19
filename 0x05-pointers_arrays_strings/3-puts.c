#include "main.h"
#include <stdio.h>

/**
  * _puts - This print string to standard output
  *
  * @str : a character pointer
  *
 **/

void _puts(char *str)
{
	int x;
	char ch;

	x = 0;
	while (*(str + x) != '\0')
	{
		ch = *(str + x);
		putchar(ch);
		x++;
	}
	putchar('\n');
}
