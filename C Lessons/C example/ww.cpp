#include <stdio.h>
void display(int age[])
{
	for(int i=0;i<3;i++)
	{
	
    printf("%d",age[i]);
}
}

int main()
{
    int ageArray[] = { 2, 3, 4 };
    display(ageArray); //Passing array element ageArray[2] only.
    return 0;
}
