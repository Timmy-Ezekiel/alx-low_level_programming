#include <stdio.h>
#include <unistd.h>

/**
  *_putchar - prints a character to stdout
  *
  *@c: Char to print
  *
  *Return: int
  *
 **/

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
