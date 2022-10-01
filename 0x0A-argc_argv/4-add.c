#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - Entry Point
  *
  * @argc : Argument counts
  * @argv : Argumes pointer
  *
  * Return: intger (0) Success
  *
 **/
int main(int argc, char *argv[])
{
	int sum = 0;
	int x = 1;
	int y;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (argc > 1)
	{
		y = 0;
		while (argv[x][y])
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
			y++;
		}
		sum += atoi(argv[x]);
		x++;
		argc--;
	}
	printf("%i\n", sum);
	return (0);
}
