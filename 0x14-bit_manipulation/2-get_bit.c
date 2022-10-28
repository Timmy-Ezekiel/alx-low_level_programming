#include <stdio.h>
#include "main.h"

/**
  *get_bit - Get the bit at a given index
  *
  *@n : Number
  *@index: index at which the needed bit is
  *
  *Return: Zero or One (Bit)
  *
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
