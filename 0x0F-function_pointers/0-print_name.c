#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: A person's name
 * @f: Pointer to a function
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
