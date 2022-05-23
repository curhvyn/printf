#include "main.h"
#include <stdarg.h>

int _print_str(va_list args)
{
    char *s = va_arg(args, char *);
    int i = 0;
    while (*s != '\0')
    {
        _putchar(*s);
        s++;
        i++;
    }
    return (i);
}
