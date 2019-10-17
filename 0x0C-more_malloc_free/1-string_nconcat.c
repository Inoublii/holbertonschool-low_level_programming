#include "holberton.h"
#include <stdlib.h>
/**
* string_nconcat - concat two strings.
* @s1: first string
* @s2: second string
* @n: unsiged int
* Return: Pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *x = "", *a = "";
unsigned int z, e, r;
z = 0;
e = 0;
r = 0;
if (s1 == NULL)
s1 = x;
if (s2 == NULL)
s2 = x;
while (s1[z] != '\0')
x++;
a = malloc((z = (n * sizeof(*s2) + 1) * sizeof(*a)));
if (a == NULL)
return (NULL);
while (e < z)
{
a[e] = s1[e];
e++;
}
while (r < n)
{
a[e] = s2[r];
r++;
e++;
}
a[e] = '\0';
return (a);
}
