#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter name: ");
    gets(name);
    //scanf("%s", name);
    printf("Your name is");
    puts(name);
    return 0;
}
