#include<stdio.h>
int main(){
	char ferb;
	int days;
	printf("if this year is leap year enter 1.If not enter aby integer: ");
	scanf("%c",&ferb);
	days = (ferb=='1')?29:28;
	printf("no of days in ferburary=%d",days);
	return 0;
}
