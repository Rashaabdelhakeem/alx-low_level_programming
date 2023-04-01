#include <stdio.h>

/**
 * print_last_digit - prints the last digit of any num
 * @n: the integer
 * Return: value of the last digit of the number
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	putchar(a + '0');

	return (a);
}
