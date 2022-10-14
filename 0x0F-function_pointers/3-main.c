#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
  * main- Entry point
  *
  *@argc : Argument count
  *@argv : arguments
  *
  *Return: int;
  *
 **/

int main(int argc, char **argv)
{
	int result;
	char oper;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oper = argv[2];
	if (oper != '%' && oper != '/' && oper != '*' && oper != '+' && oper != '-')
	{
		printf("Error\n");
		exit(99);
	}
	if ((atoi(argv[3]) == 0) && ((oper == '/') || (oper == '%')))
	{
		printf("Error\n");
		exit(100);
	}
	result = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
}
