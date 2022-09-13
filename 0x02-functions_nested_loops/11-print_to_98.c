#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_to_98- Prints number from n to 98
  *
  * @n : interger parameter
  *
  * return: void
  *
 **/

void print_to_98(int n)
{
	int x;
	if (n <= 98)
	{
		for (x = n; x < 99; x++)
		{
			printf("%d", x);
			if(x != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (x = n; x >= 98; x--)
		{
			printf("%d", x);
			if(x != 98)
			{
				printf(", ");
			}
		}
	}

	putchar('\n');
return;
}
