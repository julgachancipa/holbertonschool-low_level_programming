#ifndef VA_FUN_H
#define VA_FUN_H
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct vars - character and function
 * @tp: char
 * @f: function
 *
 * Description: match the char with the function
 */
typedef struct vars
{
	char *tp;
	void (*f)();
} var_t;
void character(va_list lst);
void integer(va_list lst);
void floater(va_list lst);
void str(va_list lst);
#endif
