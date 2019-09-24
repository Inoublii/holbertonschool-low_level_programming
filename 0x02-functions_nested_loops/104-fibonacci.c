#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 Always (Sucess)
 */
int main(void)
{
	long max = 100000000000;
	long f1 = 1, f2 = 0, p1 = 0;
	int it = 0;
	long p2 = 0, x, x2;

	do {
		x = f1;
		x2 = f2;
		f1 += p1;
		if (f1 > max - 1)
		{
			f1 -= p1;
			f1 = f1 - max + p1;
			f2++;
		}
		p1 = x;
		f2 += p2;
		p2 = x2;
		if (f2 > 0)
		{
			if (f1 < 9999999999)
				printf("%ld0%ld", f2, f1);
			else
			{
				printf("%ld%ld", f2, f1);
			}
		}
		else
		{
			printf("%ld", f1);
		}
		it++;
		if (it < 98)
			printf(", ");
	} while (it < 98);
	printf("\n");
	return (0);
}
