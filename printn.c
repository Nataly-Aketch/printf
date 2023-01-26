#include "main.h"
/**
 * printn - prints integer
 * @list: variable list
 * Return: printed number
 */
int printn(va_list list)
{
	int n = va_arg(list, int), j, c;

	if (n < 0)
	{
		c = putchar('-');
		if (c == -1)
			return (-1);
		n = -n;
	}
	if (n <= 9)
	{
		c = putchar(n + '0');
		if (c == -1)
			return (-1);
	}
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
			c = putchar(j % 10 + '0');
			if (c == -1)
				return (-1);
			j /= 10;
		}
	}
	return (c);
}
