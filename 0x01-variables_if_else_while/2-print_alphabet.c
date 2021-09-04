#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point of the program
 *
 * return: return 0
 */
int main(void)
{
	int i;

	for (i = 97; 1 <= 122; i++)
	{
		i = tolower(i);
		
		putchar(i);

	}
	putchar('\n');
	return (0);
}
