#include<stdio.h>
int main()
{
	int x;
	float y;
	char z;
	double a;
	long int b;
	printf("The size of an integer is : %d bytes\n",sizeof(x));
	printf("The size of float is : %d bytes\n",sizeof(y));
	printf("The size of char is : %d bytes\n",sizeof(z));
	printf("The size of double is : %d bytes\n",sizeof(a));
	printf("The size of long is : %ld bytes",sizeof(b));
	return 0;
}
