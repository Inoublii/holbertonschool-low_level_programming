#include "holberton.h"
#include <stdlib.h>
/**
  *malloc_checked - allocates memory
  *@b: unigned int
  *Return: pointer
  */
void *malloc_checked(unsigned int b)
{
	void *x = malloc(b);

	if (x == '\0')

		exit(98);
	return (x);
}
