#include <stdio.h>
#include <stdlib.h>

/**
  * main- Entry point
  *
  * Return: (0) Sucess
  *
 **/
int main(void)
{
	char alp1[13], yes[13];
	int x;

	alp1[13] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};
	for (x = 0; x <= 13; x++)
	{
		putchar(alp1[x]);
	}
	yes[13] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	for (x = 0; x <= 13; x++)
	}
		putchar(yes[x]);
	}

	return (0);
}
