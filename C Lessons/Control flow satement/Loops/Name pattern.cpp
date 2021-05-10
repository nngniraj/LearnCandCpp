/*
 * C program to print heart star pattern with center name
 */
  
#include <stdio.h>
#include <string.h>
  
int main()
{
    int i, j, n,command,sleep,system,restart;
    char name[50];
    int len;
 
    printf("Enter your name: ");
    gets(name);
  
    printf("Enter value of n : ");
    scanf("%d", &n);
 
    len = strlen(name);
 
    //Prints upper part of the heart shape
    for(i=n/2; i<=n; i+=2)
    {
        for(j=1; j<n-i; j+=2)
        {
            printf(" ");
        }
  
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
  
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
  
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
  
        printf("\n");
    }
  
    //Prints lower triangular part of the pattern
    for(i=n; i>=1; i--)
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }
         
        //Prints the name
        if(i == n) 
        {
            for(j=1; j<=(n * 2-len)/2; j++)
            {
                printf("*");
            }   
 
            printf("%s", name);
 
            for(j=1; j<(n*2-len)/2; j++)
            {
                printf("*");
            }
        }
        else
        {
            for(j=1; j<=(i*2)-1; j++)
            {
                printf("*");
            }
        }
  
        printf("\n");
    }
    if(command == restart)
    {
        printf("program exiting!\n");
        Sleep(2000);
        system("cls");

        WinExec("my_app.exe", SW_SHOW);
        exit(0);
    }
  
    return 0;
} 

