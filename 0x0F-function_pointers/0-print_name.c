#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using a given printing function
 * @name: the name to print
 * @f: a pointer to the printing function to use
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
