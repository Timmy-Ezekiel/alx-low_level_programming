#include "main.h"

/**
	* print_alphabet_x10 - Print (a-z) in 10 places
	*
	* Return: (0) Success
	*
	**/

void print_alphabet_x10(void)
{
	char ch;
	int x = 0;

			while (x <= 9)
			{
				ch = 'a';

				while (ch <= 'z')
				{
					_putchar(ch);
					ch++;
				};
			_putchar('\n');
			x++;
			}
return;
}
