#include <stdio.h>
#include "main.h"

/**
  * _memset - Fills memory with a constant byte
  *
  * @s : A string of characters.
  * @b : Filler character.
  * @n : Unsigned Integer (Number of bytes)
  *
  * Return: s pointer Success
  *
  **/

char *_memset(char *s, char b, unsigned int n)
{
	int x;

	x = 0;
	while (x <= n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
