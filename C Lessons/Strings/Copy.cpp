//#include <stdio.h>
//int main()
//{
//    char s1[100], s2[100], i;
//
//    printf("Enter string s1: ");
//    scanf("%s",s1);
//
//    for(i = 0; s1[i] != '\0'; ++i)
//    {
//        s2[i] = s1[i];
//    }
//
//    s2[i] = '\0';
//    printf("String s2: %s", s2);
//
//    return 0;
//}

//

#include <stdio.h>
#include <string.h>
int main()
{
     char s1[30] = "apple";
     char s2[30] = "Banana ";
     /* this function has copied s2 into s1*/
     strcpy(s1,s2);
     printf("String s1 is: %s", s1);
     return 0;
}
