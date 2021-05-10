#include <stdio.h>
int main()
{
    int x;
    float y;
    double z;
    char c;

    // Sizeof operator is used to evaluate the size of a variable
    printf("Size of int: %d bytes\n",sizeof(x));
    printf("Size of float: %d bytes\n",sizeof(y));
    printf("Size of double: %d bytes\n",sizeof(z));
    printf("Size of char: %d byte\n",sizeof(c));

    return 0;
}
