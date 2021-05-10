#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	printf("Enter size of array \n");
	scanf("%d",&n);
	int *A= (int*)malloc(n*sizeof(int));
//	for(int i = 0;i<n;i++){
//		A[i]=i+1;
//	}
	free(A);//Step 1 and run;
A[2]=6;//Next step to run
////A=NULL //after free,adjust pointer to  null
//int *B = (int*)realloc(A,2*n*sizeof(int));//last step for realloc.
//// int A* = (int*)realloc(A,0);//equivalent to free(A)
//printf("Prev block address = %d, new address = %d \n",A,B);
	for(int i = 0;i<n;i++){
		printf("%d\n ",A[i]);
	}

	
}
