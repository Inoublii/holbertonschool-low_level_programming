#include "holberton.h"
#include <stdlib.h>
/**
* create_array - a function 
* @size: size
* @c: char
* Return: pointer 
*/
char *create_array(unsigned int size, char c)
{
char *x;
unsigned int b;
if (size == 0)
return (NULL);
x = malloc(sizeof(c) * size);
if (x == NULL)
return (NULL);
for (b = 0; b < size; b++)
x[b] = c;
return (x);
}
