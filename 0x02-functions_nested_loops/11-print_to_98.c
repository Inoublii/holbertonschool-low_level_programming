#include "holberton.h"
/**
 * print_to_98 - prints integers from n to 98
 * @a: integer input
 *
 * Return: void
 */
void print_to_98(int a)
{
while (a != 98)
{
if (a < 98)
{
printf("%d, ", a);
a++;
}
else
{
printf("%d, ", a);
a--;
}
}
printf("%d\n", a);
}
