#include "main.h"
/**
 * prints - prints string
 * @list: variable list
 * Return: printed string
 */
int prints(va_list list)
{
	char *s;
	int ptr;

	s = va_arg(list, char *);
	if (!s)
		s = ("null");
	while (*s)
	{
		ptr = putchar(*s++);
		if (ptr == -1)
			return (-1);
	}
	return (0);
}

