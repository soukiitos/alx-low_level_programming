#include "lists.h"
/**
 * first - Print a text before the main function is executed
 *
 * Return: 0
 */
void __attribute__ ((constructor)) first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
