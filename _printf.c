#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
* _printf - mimics the printf function
* @format: const string
* Return: int
*/
int _printf(const char *const format, ...)
{
	va_list args;
	int display_count = 0;
	int (*func)(va_list, t_flags *);

	t_flags flags = {0, 0, 0};
	const char *ptr;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (ptr = format; *ptr; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;
			if (*ptr == '%')
			{
				display_count += _putchar('%');
				continue;
			}
			while (select_flag(*ptr, &flags))
				ptr++;
			func = _select_action(*ptr);
			display_count += (func) ?
				func(args, &flags) :
				_printf("%%%c", *ptr);
		}
		else
		{
			display_count += _putchar(*ptr);
		}

	}
	_putchar(-1);
	va_end(args);
	return (display_count);
}
