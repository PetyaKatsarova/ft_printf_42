
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
   // printf("i && d:\n");
   // printf("origi func:\n$ int: %i, i%%: %i, err: str: %d, decimal: %d\n%", 1234567, -12345678, '123', 33.3);
   // ft_printf("my func:\n$ int: %i, i%%: %i, err: str: %d, decimal: %d\n%", 1234567, -12345678, '123', 33.3);

   // printf("u:\n");
   // printf("origi func:\n$ max_num: %u, err: +1: u%%: %u, -5: %u, 33.3: %u\n%", 4294967295, 4294967296, -5, 33.3);
   // ft_printf("my func:\n$ max_num: %u, err: +1: u%%: %u, -5: %u, 3.3: %u\n%", 4294967295, 4294967296, -5, 33.3);

   // printf("x && X\n");
   // printf("orig func:\nhex x%%: %x, %x, %X, %X\n", 123, 0, 0xABC, -2);
   // ft_printf("my fun:\nhex X%%: %x, %x, %X, %X\n", 123, 0, 0xABC, -2);
//    printf("str is null: %s\n", "");

//    int x = 50;
//    int *ptr = &x;
//    char	str[12] = "Hello World!";
//    char	*str_ptr = &str;
//    printf("orig\n: The address is: %p, the value is %d .  ----- val: %s, address: %p\n", ptr, *ptr, str, str_ptr);
//    ft_printf("mine\n: The address is: %p, the value is %d. ----- val: %s, address: %p\n", ptr, *ptr, str, str_ptr);

   // int n = 399;
   // int y = 0xABCDEF;

    /* Upper and lower case. */

   //  printf ("%X hexadecimal with upper case letters.\n", n);
   //  printf ("%x hexadecimal with lower case letters.\n", n);

   //  /* Different kinds of padding. */

   //  printf ("<%8x> hexadecimal padded with blanks to width 8.\n", n);
   //  printf ("%04x hexadecimal padded with four leading zeros.\n", n);
   //  printf ("%08x padded with eight leading zeros.\n", n);

    /* Hash mark, #, adds 0x to number. */

   //  printf ("%#x automatically add 0x.\n", y);
   //  printf ("%#X, capital X, automatically add 0X.\n", y);
   //  printf ("%#X, but don't add 0X if zero.\n", 0);

   //  /* Hash mark plus padding. */

   //  printf ("%#8x - no padding is added with #.\n", y);
   //  printf ("%#8X - no padding is added with #.\n", y);
   //  printf ("%#08X - padding is added with 0, but don't add 0X.\n", 0);

   // ****** TESTING HOW TO RETURN -1 IF ERROR....
//    printf("%d\n",sizeof(char));
//    printf("orig: char: %c, %c, %c\n", "abs", -12, 0xabc);
// ft_printf("my v: char: %c, %c, %c\n", "abs", -12, 0xabc);

	//    printf("%d%dd%d\n", 1, 2, -3);
	// ft_printf("%d%dd%d\n", 1, 2, -3);

	// int i = printf("dgs%dxx\n", 10);
	// int j = ft_printf("dgs%dxx\n", 10);
	// printf("%d, %d\n", i, j);
	printf("%x\n", -10);
	ft_printf("%x\n", -10);
	int i = printf("%x\n", -10);
	int j = ft_printf("%x\n", -10);
	printf("%i, %i\n", i, j);

	return (0);
}