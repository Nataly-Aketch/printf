#include "main.h"
/**
 * printc - prints character
 * @list: character to be printed
 * Return: printed character
 */
int printc(va_list list)
{
	char c = va_arg(list, int);
<<<<<<< HEAD
	putchar(c);
	return (1);
=======

	putchar(c);
<<<<<<< HEAD
	return (0);
>>>>>>> 9c25686dbbc8d326b3cfe989789994b8081180f0
=======
	return (1);
>>>>>>> 602bce648a895f25346b68708612353427051e31
}
