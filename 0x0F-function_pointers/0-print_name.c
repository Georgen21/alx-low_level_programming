#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: Name to be printed
 * @f: The function that points to the name to be printed
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
