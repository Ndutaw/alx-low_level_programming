#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function of program
 *
 * return: return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n");
	}
	else if (n > 0)
	{
		printf("%d is positive\n");
	}
	esle
		printf("%d is zero\n", n);
	return (0);
}
