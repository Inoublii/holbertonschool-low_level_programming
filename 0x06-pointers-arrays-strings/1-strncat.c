#include "holberton.h"
/**
   * main - check the code for Holberton School students.
    *
     * Return: Always 0.
      */
char *_strncat(char *dest, char *src, int n)
{
         int x, z;
         x = 0;
         while (dest[x] != '\0')
         {
                 x++;
         }
         for (n = 0; src[n] != '\0'; n++)
         {
                 z = x + n;
                 dest[z] = src[n];
         }
         dest[x + n] = '\0';
         return (dest);
 }

