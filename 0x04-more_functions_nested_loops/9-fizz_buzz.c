#include <stdio.h>

/**
  * main - Entry Point
  *
  * Return: Success (0);
  *
 **/

int main(void)
{
	int x;

	x = 1;
	while (x <= 100)
	{
		if ((x % 3 == 0) && (x % 5 != 0))
		{
			printf("Fizz ");
		}
		else if ((x % 5 == 0) && (x % 3 != 0))
		{
			printf("Buzz ");
		}
		else if ((x % 5 == 0) && (x % 3 == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", x);
		}
		x++;
	}
	putchar('\n');
return (0);
}
