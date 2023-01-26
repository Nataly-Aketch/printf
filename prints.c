#include "main.h"
/**
 * prints - prints string
 * @list: variable list
 * Return: printed string
 */
int prints(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (!s)
		s = ("null");
	write(1, s, strlen(s));
	return (strlen(s) - 1);
}

