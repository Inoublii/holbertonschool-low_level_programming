#include "holberton.h"
/**
 * digits - last digit.
 *print last digits - hila.
 * @a: digits - i hate checker.
 * inoubli hafedh - hello.
 * Return: return kast digits.
 */
int print_last_digit(int a)
{
int x = a % 10;
if (a <= 0)
x = x * -1;
_putchar (x + '0');
return (x);
}
