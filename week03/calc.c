#include <stdio.h>

int main()
{
    double num1, num2;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("\nAddition       = %.2lf\n", num1 + num2);
    printf("Subtraction    = %.2lf\n", num1 - num2);
    printf("Multiplication = %.2lf\n", num1 * num2);

    num2 != 0 ?
        printf("Division       = %.2lf\n", num1 / num2)
        :
        printf("Division       = Cannot divide by zero\n");

    if(num2 != 0)
        printf("Modulus        = %d\n", (int)num1 % (int)num2);
    else
        printf("Modulus        = Undefined\n");

    return 0;
} /*Exercise 3 – Precedence Puzzle
Operator Precedence Rule
()
*, /, %
+, -
>, <, >=, <=
==
&&
||
1)
2 + 3 * 4

First multiplication:

2 + 12 = 14

Answer:

14
2)
(2 + 3) * 4
5 * 4 = 20

Answer:

20
3)
10 / 2 + 3
5 + 3 = 8

Answer:

8
4)
10 / (2 + 3)
10 / 5 = 2

Answer:

2
5)
5 > 3 && 2 < 4
1 && 1

Answer:

1
6)
5 > 3 || 2 > 4
1 || 0

Answer:

1
7)
!(5 == 5)
!(1)

Answer:

0
Table
Expression	Prediction	Actual Output
2+3*4	14	14
(2+3)*4	20	20
10/2+3	8	8
10/(2+3)	2	2
5>3&&2<4	1	1
5>3||2>4	1	1
!(5==5)	0	0*/