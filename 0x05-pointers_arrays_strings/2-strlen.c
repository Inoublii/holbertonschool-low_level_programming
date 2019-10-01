#include "holberton.h"
/**
 *_strlen  - swaps the values of two integers
 *@s: char name
 *Return: i
 */
int _strlen(char *s)
{
int i;
while (*(s + i) != '\0')
i++;
return (i);
}
