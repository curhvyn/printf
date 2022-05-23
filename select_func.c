#include "main.h"
#include <stdarg.h>

int (*_select_action(char c))(va_list)
{
    switch (c)
    {
    case 'c':
        return (_printchar);
        break;
    case 's':
        return (_print_str);
        break;
    case 'i':
        return (_print_int);
        break;
    case 'd':
        return (_print_int);
        break;
    default:
        return (_printchar);
        break;
    }
    return (0);
}
