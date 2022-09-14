#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: (0) success
  *
  **/

int main(void)
{
	int x, y = 0;

	for (x = 1; x < 1024; x++)
	{
		if (((x % 3) || (x % 5)) == 0)
		{
			y += x;
		}
	}
	printf("%d\n", y);
	return (0);
}
