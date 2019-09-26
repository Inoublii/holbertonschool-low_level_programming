#include "holberton.h"
/**
   * print_square - pre defined by the user.
    *@size : variable
     * Return: void.
      */
void print_square(int size)
{
int x, a;
if (size <= 0)
putchar('\n');
for (x = 0; x < size; x++)
{
for (a = 0; a < size; a++)
{
_putchar('#');
}
_putchar('\n');
}
}
