#include "holberton.h"
/**
   * main - check the code for Holberton School students.
    *
     * Return: Always 0.
      */
char *_strcat(char *dest, char *src)
{
	int x, a, z;
	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	for (a = 0; src[a] != '\0'; a++)
	{
		z = x + a;
		dest[z] = src[a];
	}
	dest[x + a] = '\0';
	return (dest);
}
