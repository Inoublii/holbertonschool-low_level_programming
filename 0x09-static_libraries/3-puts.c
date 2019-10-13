#include "holberton.h"
/**
  * _puts - prints string
  *@str:char
  *Return: Nothing
  */
void _puts(char *str)
{
int x;
for (x = 0; *(str + x) != 0; x++)
{
_putchar(str[x]);
}
_putchar('\n');
}
