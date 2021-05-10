#include <stdio.h>
union job
{
   char name[32];
   float salary;
   int workerNo;
} job1;

int main()
{
   printf("Enter name:\n");
   scanf("%s", &job1.name);

   printf("Enter salary: \n");
   scanf("%f", &job1.salary);
    printf("Enter workerNo: \n");
   scanf("%f", &job1.workerNo);

   printf("Displaying\nName :%s\n",job1.name);
   printf("Salary: %.1f\n", job1.salary);
    printf("workerNo:%d", job1.workerNo);

   return 0;
}
