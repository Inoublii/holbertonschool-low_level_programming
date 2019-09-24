#include "holberton.h"
/**
 * print_alphabet_x10 - print list of alphabets 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
char i;
int a;
for (a = 0; a <= 9; a++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
