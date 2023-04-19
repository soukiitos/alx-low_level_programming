#include "function_pointers.h"
/**
 * print_name - Print a name
 * @name: The name
 * @f: The function
 *
 * Return: 0.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
