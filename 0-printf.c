#include "main.h"
/**
 * _printf - produces output according to formating
 * @format: array of format specifiers
 * Return: 0 on success
 */
int _printf(const char *format, ...)
{
	int i = 0;
	char c, *s;
	va_list list;

	va_start(list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case '%':
					putchar('%');
					break;
				case 'c':
					c = va_arg(list, int);
					putchar(c);
					break;
				case 's':
					s = va_arg(list, char *);
					while (*s)
						putchar(*s++);
					break;

			}
		}
		else
			putchar(format[i]);
		i++;
	}
	return 0;
}
