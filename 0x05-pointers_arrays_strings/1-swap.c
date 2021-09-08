#include "main.h"
/**
 * void swap_int = swaps the value of two integers
 *
 * return: no return
 */
void swap_int(int *a, int *b)
{
	int a;
	int b;

	a = 98;
	b = 42;

	{
		_putchar ("a=%d, b=%d\n", a, b);
		swap_int(&a, &b);
		_putchar ("a=%d, b=%d\n", a, b);
	}
	void swap (int *a, int *b)
	{
		int temp;
		temp = *a;
		*a = *b;
		*b = temp;
	}
}
