#include "main.h"
/**
 * printc - prints character
 * @c: character to be printed
 * Return: printed character
 */
int printc(va_list list)
{
	char c = va_arg(list, int);
	return write(1, &c, 1);
}
