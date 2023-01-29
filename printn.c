#include "main.h"
/**
 * printn - prints an int
 * @list: variable list
 * Return: length of variable
 */
int printn(va_list list)
{
	int n = va_arg(list, int), i = 0;
	long int j;
	int last;

	if (n < 0)
	{
		putchar('-');
		last = -(n % 10);
		n /= -10;
		i++;
	}
	else
	{
		last = n % 10;
		n /= 10;
	}
	j = 0;
	while (n > 0)
	{
		j = j * 10 + (n % 10);
		n /= 10;
	}
	while (j > 0)
	{
		putchar(j % 10 + '0');
		i++;
		j /= 10;
	}
	putchar(last + '0');
	i++;
	return (i);
}
