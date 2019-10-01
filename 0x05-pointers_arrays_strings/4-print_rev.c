#include "holberton.h"
/**
* print_rev - prints in reverse
*@s:char pointer
*Return: Nothing
*/
void print_rev(char *s)
{
int x, z;
x = 0;
while (s[x] != '\0')
{
	x++;
}
x = x - 1;
for (z = 0; z <= x; z++)
{
_putchar(s[x - z]);
}
_putchar('\n');
}
