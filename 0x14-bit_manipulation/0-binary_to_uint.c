#include <stdio.h>
#include "main.h"

unsigned int _strlen(const char *h);
unsigned int _power(unsigned int a, unsigned int b);

/**
  *binary_to_uint - Converts Binary to Integer
  *
  *@b : Character string to Store binary
  *
  *Return: Equivalent Decimal
  *
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0, stlen;
	int x;
	unsigned int power = 0;

	if (b == NULL)
		return (0);
	stlen = _strlen(b);
	for (x = (stlen - 1); x >= 0 ; x--)
	{
		if ((b[x] != '0') && (b[x] != '1'))
			return (0);
		if (b[x] == '1')
		{
			total += _power(2, power);
		}
		power++;
	}
	return (total);
}

/**
  *_strlen - calculates the length of a string
  *
  *@h: pointer to character string
  *
  *Return: The length of the string
  *
 **/

unsigned int _strlen(const char *h)
{
	if (*h == '\0')
		return (0);
	else
		return (1 + _strlen(h + 1));
}

/**
  *_power - calculates the power
  *
  *@a : number to be powered
  *@b : Number to become a power of a
  *
  *Return: Answer
  *
 **/

unsigned int _power(unsigned int a, unsigned int b)
{
	unsigned int x, total = a;

	if (b == 0)
		return (1);
	if (b == 1)
		return (a);
	x = 2;
	while (x <= b)
	{
		total *= a;
		x++;
	}
	return (total);
}
