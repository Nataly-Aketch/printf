#include "main.h"
/**
 * printn - prints integer
 * @list: variable list
 * Return: printed number
 */
int printn(va_list list)
{
<<<<<<< HEAD
	int n = va_arg(list, int), j, c;
=======
	int n = va_arg(list, int), j;
>>>>>>> d0de6f7dbb8e30e4ff3a91f9196abfd4a16da54f

	if (n < 0)
	{
		c = putchar('-');
		if (c == -1)
			return (-1);
		n = -n;
	}
<<<<<<< HEAD
	if (n <= 9)
	{
		c = putchar(n + '0');
		if (c == -1)
			return (-1);
		else
			return (1);
	}
	else
	{
=======
	if (n <= 0)
		putchar(n + '0');
	else
	{
>>>>>>> d0de6f7dbb8e30e4ff3a91f9196abfd4a16da54f
		j = 0;
		while (n > 0)
		{
			j = j * 10 + (n % 10);
			n /= 10;
		}
		while (j > 0)
		{
<<<<<<< HEAD
			c = putchar(j % 10 + '0');
=======
			putchar(j % 10 + '0');
>>>>>>> d0de6f7dbb8e30e4ff3a91f9196abfd4a16da54f
			j /= 10;
		}
	}
	return (c);
}
