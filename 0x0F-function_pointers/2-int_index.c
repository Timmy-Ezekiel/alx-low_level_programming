#include <stdio.h>

/**
  * int_index - Searches for an integer
  * and perform a function which either return value of 0, < 0 or > 0
  *
  * @array : The array of integers
  * @size : Size of the array
  * @cmp : Function to be performed (Function pointer)
  *
  * Return: Integer (Index of the number)
  *
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
