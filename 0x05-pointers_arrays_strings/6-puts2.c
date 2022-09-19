#include "main.h"
#include <stdio.h>

/**
  * puts2 - This print string to standard output
  *
  * @str : a character pointer
  *
 **/

void puts2(char *str)
{
	int x;
	char ch;

	x = 0;
	while (*(str + x) != '\0')
	{
		ch = *(str + x);
		putchar(ch);
		x += 2;
	}
	putchar('\n');
}
