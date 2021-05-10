#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];

    printf("Enter a string: ");
    //scanf("%s", s);
    gets(s);
    printf("Length of string:%d",strlen(s));

//    for(i = 0; s[i] != '\0'; ++i)
//
//    printf("Length of string: %d\n", i);
//    return 0;
}
