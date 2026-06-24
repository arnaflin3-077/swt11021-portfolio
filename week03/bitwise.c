#include <stdio.h>

int main()
{
    int a,b;

    a=12; b=10;
    printf("12 & 10 = %d\n", a&b);
    printf("12 | 10 = %d\n", a|b);
    printf("12 ^ 10 = %d\n", a^b);
    printf("12 << 1 = %d\n\n", a<<1);

    a=255; b=170;
    printf("255 & 170 = %d\n", a&b);
    printf("255 | 170 = %d\n", a|b);
    printf("255 ^ 170 = %d\n", a^b);
    printf("255 << 1 = %d\n\n", a<<1);

    a=63; b=36;
    printf("63 & 36 = %d\n", a&b);
    printf("63 | 36 = %d\n", a|b);
    printf("63 ^ 36 = %d\n", a^b);
    printf("63 << 1 = %d\n", a<<1);

    /*Exercise 2 – Bitwise Workshop
Pair 1
a = 12 = 1100
b = 10 = 1010
AND (&)
1100
1010
----
1000 = 8
OR (|)
1100
1010
----
1110 = 14
XOR (^)
1100
1010
----
0110 = 6
Left Shift
12 << 1

1100
↓

11000 = 24
Pair 2
a = 255
b = 170
Results
Expression	Result
a&b	170
a|b	255
a^b	85
a<<1	510
Pair 3
a = 63
b = 36
Results
Expression	Result
a&b	36
a|b	63
a^b	27
a<<1	126*/

    return 0;
}