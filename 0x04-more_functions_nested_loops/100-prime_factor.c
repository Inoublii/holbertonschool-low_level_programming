#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of
 * number 612852475143
 *
 * Return: 0;
 */


int main(void)
{
long x, largest_num;
long n;

number = 612852475143;
for (x = 2; n < sqrt(number); x++)
{
if ((number % x) == 0)
{
largest_num = x;
number = number / x;
x = 1;
}
}
largest_num = number;
printf("%ld\n", largest_num);
return (0);

}
