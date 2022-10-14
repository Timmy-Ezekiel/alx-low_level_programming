#include "function_pointers"

/**
  *print_name - Function that prints name
  *
  * @name: String passed into the function
  * @f : function pointer
  *
  * Return: void
  *
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
