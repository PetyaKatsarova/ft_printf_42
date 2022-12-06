#include "ft_printf.h"
#include <stdio.h>

int main(void)
{ // CHAR
//    printf("origi fun:\n& char%%1: %c -- char2: %c, -- char 3: %c\n%", '1', '2', '3');
//    ft_printf("my fun:\n& char%%1: %c -- char2: %c, -- char 3: %c\n%", '1', '2', '3');
//  //STR and CHAR
//    printf("--- STR AND CHAR ---\n"); // why does it come double??
//    printf("origin:\n&char1: %c -- str2: %s -- str%%3: %s\n%", 'C', "str2", "str3");
// ft_printf("my fun:\n&char1: %c -- str2: %s -- str%%3: %s\n%", 'C', "str2", "str3");
//    printf("i && d:\n");
//    printf("origi func:\n$ int: %i, i%%: %i, err: str: %d, decimal: %d\n%", 1234567, -12345678, '123', 33.3);
//    ft_printf("my func:\n$ int: %i, i%%: %i, err: str: %d, decimal: %d\n%", 1234567, -12345678, '123', 33.3);

//    printf("u:\n");
//    printf("origi func:\n$ max_num: %u, err: +1: u%%: %u, -5: %u, 33.3: %u\n%", 4294967295, 4294967296, -5, 33.3);
//    ft_printf("my func:\n$ max_num: %u, err: +1: u%%: %u, -5: %u, 3.3: %u\n%", 4294967295, 4294967296, -5, 33.3);

//    printf("x && X\n");
//    printf("orig func:\nhex x%%: %x, %x, %X, %X\n", 123, 0, 0xABC, -2);
//    ft_printf("my fun:\nhex X%%: %x, %x, %X, %X\n", 123, 0, 0xABC, -2);

//     /* Upper and lower case. */

//     printf ("%X hexadecimal with upper case letters.\n", n);
//     printf ("%x hexadecimal with lower case letters.\n", n);

	int a = printf("%");
    int b = ft_printf("%");
	printf("\n str_lens: %d, %d\n", a, b);

	int c = printf("real: %\n");
    int d = ft_printf("your: %\n");
	printf("\n str_lens: %d, %d\n", c, d);

	int e = printf("real:TE%TT\n");
    int f = ft_printf("your:TE%TT\n");
	printf("\n str_lens: %d, %d\n", e, f);
   return (0);
}