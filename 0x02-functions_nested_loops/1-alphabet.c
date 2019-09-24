#include "holberton.h"
/**
 *main-prints out alphabets, followed by new line
 *print alphabets
 *Return: 0
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
