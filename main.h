#ifdef _MAIN_H_
#define _MAIN_H_

int print_char(va_list);
int print_num(va_list);
int print_int(va_list);
int print_str(va_list);
int print_percent(va_list);
int print_binary(va_list);
int print_reversed(va_list);
int rot13(va_list);
int unsigned_integer(va_list);
int print_hex(va_list);
int print_HEX(va_list);
int print_address(va_list);

typedef struct s_printf
{
	char *spe_c;
	int (*func)(va_list);
} s_printf;

s_printf func_arr[] = {
	{"c", print_char},
	{"s", print_str},
	{"%", print_percentage},
	{"d", print_int},
	{"i", print_int},
	{"b", print_binary},
	{"r", print_reversed},
	{"R", rot13},
	{"u", unsigned_integer},
	{"o", print_octal},
	{"x", print_hex},
	{"X", print_HEX},
	{"p", print_address},
	{NULL, NULL}
},
int select_f(const char *format, s_printf func_arr[], va_list arg_list);

#endif
