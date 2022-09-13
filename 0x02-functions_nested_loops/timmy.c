#include "main.h"

/**
	* print_alphabet- print letter from a-z
	*
	* Return: void Success
	*
	**/
void print_alphabet(void)
{
	char ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	_putchar('\n');
return;
}
