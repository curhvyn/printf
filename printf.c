#include "main.h"
/**
 *_printf - printf
 *@format: const char pointer
 *Description: this functions implement some functions of printf
 *Return: num of characteres printed
 */
int _printf(const char *format, ...)
{
	const char *string;
	int cont = 0;
	va_list arg;

	if (!format)
		return (-1);

	va_start(arg, format);
	string = format;

	cont = loop_format(arg, string);

	va_end(arg);
	return (cont);
}
