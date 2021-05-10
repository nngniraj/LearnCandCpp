#include<stdio.h>
int main(){
	int fname[20],mname[20],lname[20];
	printf("Enter the first name,middlename,lastname");
	scanf("%s %s %s",fname,mname,lname);
	
	printf("%c. %c. %s",fname[0],mname[0],lname);
	return 0;
}
	

