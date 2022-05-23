#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * Struct flags - struct containing  flags to "Turn On"
 * When a flag specifier is passed to _printf()
 * @plus - flag for '+' Character
 * @space - flag for ' ' Character
 * @hash - flag for '#' Character
 */

typedef struct flags
{
    int plus;
    int space;
    int hash;
} flags_t;

 /**
  * Struct printHandler - struct to choose the right function depending on
  * The format specifier pass to _printf()
  * @c - format specifier
  * @f - pointer to the correct printing function

typedef struct printHandler
{
    char c;
    int (*f)(va_list ap, flags_t *f);
} ph;

/* print_num */
int print_int(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
int count_digit(int i);

/* print_bases */
int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);

/* converter */
char *convert( unsigned long int num, int base, int lowercase);

/* _printf */
int _printf(const char *format, ...);

/* get_print */
int (*get_print(char s))(va_list, flags_t *);  

/* get_flag */
int get_flag(char s, flags_t *f);

/* print_alpha */
int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);

/* write_funcs */
int _putchar(char c);
int _puts(char *str);

/* print_custom */
int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);

/* print_address */
int print_address(va_list l, flags_t *f);

/* print_percent */
int print_percent(va_list l, flags_t *f);

#endif
