#include "holberton.h"
/**
   *print_triangle - check the code for Holberton School students.
    *@size : print_triangle
     * Return: Always 0.
      */
void print_triangle(int size)
{
int a, x, z;
if (size <= 0)
{
_putchar('\n');
}
for (a = 0; a < size; a++)
{
for (x = 0; x < size; x++)
{
z = size - a - 1;
if (x < z)
{
_putchar(' ');
}
else
_putchar('#');
}
_putchar('\n');
}
}
