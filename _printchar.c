#include "main.h"
#include <stdarg.h>

int _printchar(va_list args)
{
    int c = va_arg(args, int);
    _putchar(c);
    return (1);
}
