#include <stdio.h>
#include <stdlib.h>

/**
  *array_range : Creates an array of integers
  *
  * @min : Value Starting point
  * @max : Value End point
  *
  * Return: pointer to the address.
  *
 **/

int *array_range(int min, int max)
{
	int *arrayz;
	int x, length;
	
	if (min > max)
		return (NULL);
	for (x = min; x <= max; x++)
	{
		length += 1;
	}
	arrayz = malloc(length * sizeof(int));
	if (arrayz == NULL)
		return (NULL);
	for(x = 0; x < length; x++)
	{
		arrayz[x] = min;
		min++;
	}
	return (arrayz);
}
