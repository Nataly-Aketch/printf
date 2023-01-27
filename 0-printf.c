#include "main.h"
/**
 * _printf - produces output according to formating
 * @format: array of format specifiers
 * Return: 0 on success
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0;
	int length = 0;
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (; format[i] && format; i++)
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
					break;
				default:
					return (-1);

			}
		}
		else
		{
			putchar(format[i]);
			length++;
		}

	}
	return (length);
}
