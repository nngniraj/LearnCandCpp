/* Example to reverse a sentence entered by user without using strings. */

#include <stdio.h>
void reverseSentence();

int main()
{
    printf("Enter a sentence: ");
    reverseSentence();

    return 0;
}

void reverseSentence()
{
    char c[20];
    scanf("%s", c);

    if( c[20] != '\n')
    {
        //reverseSentence();
        printf("%c",c[1]);
    }
	
	
}
