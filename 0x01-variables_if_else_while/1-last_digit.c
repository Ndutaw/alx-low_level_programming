#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point of the program
 *
 * Return: return 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else
	{
		if (last > 5)
		{
			printf("last digit of %d is %d and is greater than 5\n", n, last);
		}
		else if (last < 6)
		{
			printf("last digit of %u is %u and is less than 6 and not 0\n", n, last);
			}

	}
	return (0);
}