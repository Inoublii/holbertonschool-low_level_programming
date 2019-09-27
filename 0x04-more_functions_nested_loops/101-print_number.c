 #include "holberton.h"
/**
<<<<<<< HEAD
 * print_number - prints # using _putchar  function
 * @n: the integer to print
 *
 * Return: void
 */
=======
* print_number - prints # using _putchar  function
* @n: the integer to print
*
* Return: void
*/
>>>>>>> 65c933f207db9223ec5c8f7c87b54fa4b681bf4c
void print_number(int n)
{
int copy, nth, size = 1, ones = n % 10;
n /= 10;
copy = n;
if (ones < 0)
{
ones *= -1, copy *= -1, n *= -1;
_putchar('-');
}
if (copy > 0)
{
while (copy / 10 != 0)
{
copy /= 10, size *= 10;
}
while (size > 0)
{
nth = n / size;
_putchar('0' + nth);
n -= nth *size;
size /= 10;
}
}
_putchar('0' + ones);
}

