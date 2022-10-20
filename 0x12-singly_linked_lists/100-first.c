#include <stdio.h>

/**
  *printer - prints output before the main function
  *
 **/
void printer(void) __attribute__((constructor));
void printer(void)
{
	printf("You're beat! and yet, you must allow\n");
	printf("I bore my house upon my back!\n");
}
