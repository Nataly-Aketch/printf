#include "main.h"
/**
 * _printf - produces output according to formating
 * @format: array of format specifiers
 * Return: 0 on success
 */
int _printf(const char *format, ...)
{
	int i = 0, length = 0;
	va_list list;

	va_start(list, format);
	if (format == NULL)
		return (-1);
	for (; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case '%':
					putchar('%');
					length++;
					break;
				case 'c':
					length += printc(list);
					break;
				case 's':
					length += prints(list);
					break;
				case 'd':
				case 'i':
					length += printn(list);

			}
		}
		else
			length++;
		{
			putchar(format[i]);
		}

	}
	return (length);
}
