#include<stdio.h>
#include<conio.h>
 
int main() {
    char op;
    float num1,num2;
     
    
	printf("Enter an arithemetic operator(+-*/)\n");
    scanf("%c",&op);
	printf("Enter two numbers as operands\n");
    scanf("%f%f", &num1, &num2);
    
 
    switch(op) {
        case '+': 
         printf("%.2f + %.2f = %.2f",num1, num2, num1+num2);
         break;
        case '-':
                printf("%.2f - %.2f = %.2f",num1, num2, num1-num2);
                break;
        case '*':
                printf("%.2f * %.2f = %.2f",num1, num2, num1*num2);
                break;
        case '/':
                printf("%.2f / %.2f = %.2f",num1, num2, num1/num2);
                break;
        default: 
                printf("ERROR: Unsupported Operation");
    }
     
    getch();
    return 0;
}
