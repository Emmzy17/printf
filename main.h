#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

extern char buffer[1024];
extern int buf_index;

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int _printf(const char *format, ...);
int (*get_print_function(char *s))(va_list);
int _putchar(char c);
int print_specifier(const char *format, va_list args);
int print_integer(va_list args);
int print_unsigned_integer(va_list args);
int print_octal(va_list args);
unsigned int char_len(unsigned int num, int base);
char *rev_string(char *s);
void write_char(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int hex_check(int num, char x);
int print_binary(va_list args);
int print_pointer(va_list args);
int print_hex(unsigned long int n);
int _strcmp(char *s1, char *s2);
int print_long_decimal(va_list args);
int print_short_decimal(va_list args);
int print_long_unsigned(va_list args);
int print_short_unsigned(va_list args);
int print_long_octal(va_list args);
int print_short_octal(va_list args);
int print_long_hex_lower(va_list args);
int print_short_hex_lower(va_list args);
int print_long_hex_upper(va_list args);
int print_short_hex_upper(va_list args);

/**
 * struct format - the format handler structure
 * @specifier: The specified format
 * @f: The associated format handler
 *
 * Description: a structure that stores a format specifier
 * and its associated handler
*/
typedef struct format
{
	char *specifier;
	int (*f)(va_list);
} format_t;


#endif
