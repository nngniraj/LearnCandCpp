/**
 * C program to check whether a triangle is valid or not if angles are given
 */
 
#include <stdio.h>
 
int main()
{
    int a, b, c, sum; //a, b, c are three angles of a triangle
 
    /* Reads all three angles of triangle */
    printf("Enter three angles of triangle: \n");
    scanf("%d%d%d", &a, &b, &c);
 
 
    /* Calculate the sum of all angles of triangle */
    sum = a + b + c; 
 
 
    /* If sum=180 then its a valid triangle else not */
    if(sum == 180) 
    {
        printf("Triangle is valid.\n");
    }
    else
    {
        printf("Triangle is not valid.\n");
    }
 
    return 0;
}
