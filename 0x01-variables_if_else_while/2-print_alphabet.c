#include <stdio.h>
#include <ctype.h>
/**
 * Main - program to print alphabet followed by new line
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
