#include <stdio.h>

/**
  *_memcpy - Copies memory Area
  *
  * @dest : reciever string
  * @src : Donating string
  * @n : unsigned int (Memory byte to be donated by src)
  *
  * Return: dest Success
  *
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
