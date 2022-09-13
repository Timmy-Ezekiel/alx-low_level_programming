#include <stdio.h>

void print_alphabet(void);

/**
	* main - Entry point
	*
	* Return: (0) Success
	*
	**/
int main(void)
{
	print_alphabet();
	return (0);
}

/**
	* print_alphabet - print alpahbets
	*
	* Return: void
	*
	**/
void print_alphabet(void)
{
	char x;

		x = 'a';
		while (x <= 'z')
		{
			putchar(x);
			x++;
		}
putchar('\n');
}
