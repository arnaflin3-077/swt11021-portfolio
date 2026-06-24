#include <stdio.h>

int main()
{
    int num = 255;
    float pi = 3.141593;
    char ch = 'A';

    printf("Integer (decimal) : %d\n", num);
    printf("Integer (hex)     : %x\n", num);
    printf("Integer (octal)   : %o\n", num);

    printf("Float (default)   : %f\n", pi);
    printf("Float (2 dp)      : %.2f\n", pi);
    printf("Float (scientific): %e\n", pi);

    printf("Character         : %c\n", ch);
    printf("Percentage        : 33%%\n");

    /*Important Format Specifiers
Specifier	Meaning
%d	        Integer
%f	        Float/Double
%.2f	2 decimal places
%e	    Scientific notation
%c	    Character
%x	    Hexadecimal
%o	    Octal
%%	    Print % symbol*/

    return 0;
}