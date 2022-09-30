#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  *
  * @argc : Argument Count
  * @argv : Arguments
  *
  * Return: Integer (0) Success
  *
 **/

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
