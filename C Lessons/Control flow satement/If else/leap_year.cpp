#include <stdio.h>
int main()
	{
		int current_year;
		printf("Enter the current year:	");
		scanf("%d", &current_year);
		if(current_year%2 == 0 && current_year%4 == 0)
			{
				printf("the current year is a leap  year");
			}
		else
			{
				printf("the current year isn't a leap  year");
			}
		return 0;
	}
