#include "main.h"
/**
 * _isupper - function to verify if a character  is uppercase or not
 * @c: tested character
 * Return: returns 1 if it is uppercase , 0 if not
 */

int _supper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}