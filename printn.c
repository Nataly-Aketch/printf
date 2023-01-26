#include "main.h"
/**
 * printn - prints integer
 * @list: variable list
 * Return: printed number
 */
int printn(va_list list)
{
	int n = va_arg(list, int), j;

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n <= 0)
		putchar(n + '0');
	else
	{
		j = 0;
		while (n > 0)
		{
			j = j * 10 + (n % 10);
			n /= 10;
		}
		while (j > 0)
		{
			putchar(j % 10 + '0');
			j /= 10;
		}
	}
	return (0);
}
