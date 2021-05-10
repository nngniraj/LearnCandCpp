#include <stdio.h> // printf
#include <windows.h> // used for sleep function

int main(){
	int x,y,z;
    for (int i = 1; i <=100; i++) {
        printf("\b\b\b\b\b. %3d%%", i);
        Sleep(100);
        
    }
    while(1)
    {
	
    printf("\n-----MENU------------\n");
    printf("Enter x and y:");
    scanf("%d%d",&x,&y);
    z=x+y;
    printf("Sum=%d",z);
   }
    return 0;
}
