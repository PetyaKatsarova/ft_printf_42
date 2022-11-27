#include "libftprintf.h"
#include <stdio.h>

int main(void)
{ // CHAR
   printf("origi fun:\n& char%%1: %c -- char2: %c, -- char 3: %c\n%", '1', '2', '3');
   ft_printf("my fun:\n& char%%1: %c -- char2: %c, -- char 3: %c\n%", '1', '2', '3');
 //STR and CHAR
   printf("--- STR AND CHAR ---\n");
   printf("origin:\n&char1: %c -- str2: %s -- str%%3: %s\n%", 'C', "str2", "str3");
ft_printf("my fun:\n&char1: %c -- str2: %s -- str%%3: %s\n%", 'C', "str2", "str3");

   return (0);
}