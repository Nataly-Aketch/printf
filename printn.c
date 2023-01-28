#include "main.h"
/**
 * printn - prints an int
 * @list: variable list
 * Return: length of variable
 */
int printn(va_list list)
{
	long int n = va_arg(list, long int), j;
	int i = 0;

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	j = 0;
	while (n > 0)
	{
		j = j * 10 + n % 10;
		n /= 10;
		i++;
	}
	while (j > 0)
	{
		putchar(j + '0');
		j /= 10;
	}
	return (i);
}
