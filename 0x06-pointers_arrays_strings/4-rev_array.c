#include <stdio.h>

/**
  * reverse_array - reverse an integer variable
  *
  * @a : an interger pointer (array)
  * @n : an integer varible (Length of array)
  *
  * Return: void Success
  *
 **/

void reverse_array(int *a, int n)
{
	int i;
	int value;

	for (i = 0; i < (n / 2); i++)
	{
		value = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = value;
	}
}
