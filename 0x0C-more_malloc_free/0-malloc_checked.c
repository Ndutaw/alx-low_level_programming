#include "main.h"

/**
 * malloc_checked - allocates memory using malloc, exit (98) if it fails
 * @b: size of memory block to be allocated
 *
 * Return: pointer to the address of the memory
 */
void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
		exit(98);
	return (block);
}
