#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: parameter string
 *
 */
void _print_rev_recusrion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recusrion(s + 1);
		_putchar(*s);
	}
}
