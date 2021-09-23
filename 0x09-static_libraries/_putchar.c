#include "main.h"

/**
 * _putchar - writes character c
 *
 * @c: character to ba writen
 * Return: On success 1
 * On error, -1 is returned and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
