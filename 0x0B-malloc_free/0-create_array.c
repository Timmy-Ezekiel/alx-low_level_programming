#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - This function creates an array.
  *
  * @size : An Unsigned int character(size of array);
  * @c : Char to intialize each address with
  *
  * Return: A pointer to this address.
  *
 **/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	for (x = 0; x <= size; x++)
	{
		*(ptr + x) = c;
	}
	return (ptr);
}
