#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * return: no return
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; 1 <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
