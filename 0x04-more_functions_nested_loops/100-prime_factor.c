#include <stdio.h>
#include <math.h>
/**
 * main - a program that finds and prints the largest    prime factor of the number 612852475143
 *followed by a new line
 *
 * Return: return 0
 */
int main(void)
{
	long int c, b, a = 612852475143;

	while (a != 1)
	{
		for (b = 2; b <= a; ++b)
		{
			if ((a % b) == 0)
			{
				break;
			}
		}
		c = (a / b);
		a = c;
	}
	printf("%li\n", b);

	return (0);
}
