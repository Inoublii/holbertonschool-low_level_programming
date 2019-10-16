#include "holberton.h"
#include <stdlib.h>
/**
* _strdup -  a pointer
* @str: string
* Return: pointer
*/
char *_strdup(char *str)
{
char *ret;
unsigned int a, b;
if (str == NULL)
return (NULL);
for (a = 0; str[a] != '\0'; a++)
;
ret = (char *)malloc(sizeof(char) * (a + 1));
if (ret == NULL)
return (NULL);
for (b = 0; b <= a; b++)
ret[b] = str[b];
return (ret);
}
