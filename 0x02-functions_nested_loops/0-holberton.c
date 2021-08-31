#include "main.h"

/**
 * main - main function of my project
 *
 *
 * Return: always return 0
 */
int main(void)
{
	char c[10] = "Holberton";
	int i;

	for(i = 0;  i < 10; i++) {
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
