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


	// int a = printf("%");
    // int b = ft_printf("%");
	// printf("\n str_lens: %d, %d\n", a, b);

	// int c = printf("real: %\n");
    // int d = ft_printf("your: %\n");
	// printf("\n str_lens: %d, %d\n", c, d);
	// char *s = "hello";
	// int e = printf("real:%TE%c\nT%sbye\n", s);
    // int f = ft_printf("your:%TE%c\nT%sbye\n", s);
	// printf("orig: %i, test: %i\n", e, f);
	
	// int bla = ft_printf("test % %i%%%%-\n",-7);
	// int wtf = printf("test % %i%%%%-\n",-7);
	// printf("%i, %i\n", bla, wtf);
	//printf("original: %T %s %\n", -5);

// shows DIFFERENT STR LEN
	// char *s = "hello";
	// int e = printf("real:%TE%c\nT%sbye%i\n", s);
    // int f = ft_printf("your:%TE%c\nT%sbye%i\n", s);
	// printf("orig: %i, test: %i\n", e, f);
	// char *s = "hello";
	// int e = printf("real:%TE%c, %s\n\n", 'c', "gblkbjngkjjhrt");
    // int f = ft_printf("your:%TE%c, %s\n\n", 'c', "gblkbjngkjjhrt");
	// printf("orig: %i, test: %i\n", e, f);
	// int b = printf("%%%\n");
	// int a = ft_printf("%%%\n");
	// printf("%d, %d\n", a, b);

	//char *s = "hello";
	// int e = printf("real:%%iTE%%c, %s%s\n\n", 'c', "gblkbjngkjjhrt", s);
    // int f = ft_printf("your:%%iTE%%c, %s%s\n\n", 'c', "gblkbjngkjjhrt", s);
	// printf("orig: %i, test: %i\n", e, f);
	// int b = printf("%%%\n");
	// int a = ft_printf("%%%\n");
	// printf("%d, %d\n", a, b);

	// int one = printf("hi\n");
	// int two = ft_printf("hi\n");
	// printf("%i, %i\n", one, two);

	// int e = printf("real:%iTE%%c, %s%s\n\n", 'c', "gblkbjngkjjhrt", s);
    // int f = ft_printf("your:%iTE%%c, %s%s\n\n", 'c', "gblkbjngkjjhrt", s);
	// printf("orig: %i, test: %i\n", e, f);

	int e = printf("%c\0, %s\n", 'c', "gblkbjngkjjhrt");
    int f = ft_printf("%c\0, %s\n", 'c', "gblkbjngkjjhrt");
	printf("orig: %i, test: %i\n", e, f);

   return (0);
}