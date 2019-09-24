#include "holberton.h"
/**
 * print_last_digit - function that prints the last digit
 * @a: takes in an integer
 * Return: returns output
 */
int print_last_digit(int a)
{
int x = a % 10;
if (a <= 0)
x = x * -1;
_putchar (x + '0');
return (x);
}
