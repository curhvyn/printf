#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
/**
 * struct s_flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct s_flags
{
	int plus;
	int space;
	int hash;
} t_flags;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list args, t_flags *flags);
} ph;

int select_flag(char s, t_flags *f);
int (*_select_action(char c))(va_list, t_flags *);
int _printchar(va_list args, t_flags *flags);
int _print_int(va_list args, t_flags *flags);
int _print_str(va_list args, t_flags *flags);
int _print_bin(va_list args, t_flags *flags);
int _print_hex(va_list args, t_flags *flags);
int _print_hex_big(va_list args, t_flags *flags);
int _print_address(va_list args, t_flags *flags);
int _print_bigS(va_list args, t_flags *flags);
int _print_rot13(va_list args, t_flags *flags);
int print_rev(va_list args, t_flags *flags);
int print_octal(va_list args, t_flags *flags);
int _print_unsigned(va_list args, t_flags *flags);
int _putchar(char c);
int _printf(const char * const format, ...);
char *convert(unsigned long int num, int base, int lowercase);
int _puts(char *str);
void print_number(int n);
int count_digit(int n);
#endif
