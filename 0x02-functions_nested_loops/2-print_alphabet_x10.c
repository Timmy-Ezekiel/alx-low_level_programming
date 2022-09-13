#include <stdio.h>

void print_alphabet_x10(void);

/**
	* main - Entry point
	*
	* Return: (0) Success
	*
	**/
int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
	* print_alphabet_x10 - print alpahbets
	*
	* Return: void
	*
	**/
void print_alphabet_x10(void)
{
	int y;
	char x;

		y = 0;
		while (y <= 10)
		{
			x = 'a';
			while (x <= 'z')
			{
				putchar(x);
				x++;
			};
		putchar('\n');
		y++;
		}
}
