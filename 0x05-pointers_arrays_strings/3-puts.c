#include "main.h"

/**
 * _puts - prints a string, followes by a newline to stdout
 * @str: string perameter to print
 * Return: Nothing
*/

void _puts(char *str)

{
	while (*str != '\0')
	{

	putchar(*str + 0);
		str++;
	}

	putchar('\n');
}
