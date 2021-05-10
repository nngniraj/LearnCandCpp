1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
/**
 * C program to find sum of its digits of a number
 */
 
#include <stdio.h>
 
int main()
{
    int num, sum=0;
 
    /* Read a number from user */
    printf("Enter any number to find sum of its digit: ");
    scanf("%d", &num);
 
    /* Repeat till num becomes 0 */
    while(num!=0)
    {
        /* Find the last digit of num and add to sum */
        sum += num % 10;
 
        /* Removes last digit from num */
        num = num / 10;
    }
 
    printf("Sum of digits = %d", sum);
 
    return 0;
} 
