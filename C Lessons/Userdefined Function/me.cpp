#include<stdio.h> 
#include<conio.h> 
#include<stdlib.h>
int main() 
{ 
int choice, num, i; 
unsigned long int fact; 
 
while(1) 
{ 
printf("\n1.Factorial\n"); 
printf("2.Prime\n"); 
printf("3.Odd/Even\n"); 
printf("4.Exit\n"); 
printf("\nYour choice?"); 
scanf("%d",&choice); 
switch(choice) 
{ 
case 1: 
printf("\nEnter number:"); 
scanf("%d",&num); 
fact = 1; 
for(i=1;i<=num;i++) 
fact=fact*i; 
printf("\n Factorial value=%lu\n",fact); 
break; // Takes control out of switch 
case 2: 
printf("\n Enter number:"); 
scanf("%d",&num); 
for(i=2;i<num;i++) 
{ 
if(num%i== 0) 
{ 
printf("\n %d is not a prime number.\n",num); 
break; //Takes control out of for loop 
} 
} 
if(i==num) 
printf("\n%d is a prime number.\n",num); 
break; //Takes control out of switch 
case 3: 
printf("\nEnter number:"); 
scanf("%d",&num); 
if(num %2==0) 
printf("\n%d is even number.\n",num); 
else 
printf("\n%d is odd number .\n",num); 
break; //Takes control out of switch 
case 4: 
exit(0); //Terminates program execution 
} 
}
 
getch(); 
}
