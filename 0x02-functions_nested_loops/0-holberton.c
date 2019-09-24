#include "holberton.h"
/**
 *main-prints out Holberton, followed by new line
 *
 *Return: 0
 */
int main(void)
{
int i;
char c[] = "Holberton";
for (i = 0; i < 9; i++)
{
_putchar(c[i]);
}
_putchar("\n");
return (0);
}
