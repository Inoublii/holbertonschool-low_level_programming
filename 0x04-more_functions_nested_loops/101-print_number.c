#include "holberton.h"

/**
 * print_number - prints # using _putchar function
 * @n: the integer to print
 *
 * Return: void
 */
void print_number(int n)
{
int x, a, m = 1, z = n % 10;

n /= 10;
x = n;
if (z < 0)
{
z *= -1,  *= -1, n *= -1;
_putchar('-');
}
if (x > 0)
{
while (x / 10 != 0)
{
x /= 10, m *= 10;
}
while (m > 0)
{
a = n / m;
_putchar('0' + a);
n -= a *m;
m /= 10;
}
}
_putchar('0' + z);
}
