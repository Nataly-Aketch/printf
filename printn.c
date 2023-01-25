#include "main.h"
/**
 * printn - prints integer
 * @list: variable list
 * Return: printed number
 */
int printn(va_list list)
{
	int n = va_arg(list, int);
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		putchar(48);
	}
	while (n > 0)
	{
		if (n < 10)
			putchar(n % 10 + '0');
		n /= 10;
	}
	return (0);
}
