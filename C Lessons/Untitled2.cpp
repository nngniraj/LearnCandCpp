//Passing an entire one-dimensional array to a function
#include <stdio.h>
float average(float age[]);

int main()
{
    float avg, age[] = { 23.4, 55, 22.6, 3, 40.5, 18 };
    avg = average(age); /* Only name of array is passed as argument. */
    printf("Average age=%.2f", avg);
    return 0;
}

float average(float age[])
{
    int i,num;
    
    float avg, sum = 0.0;
    for (i = 0; i < 6; ++i) {
        sum += age[i];
    }
    avg = (sum / 6);
    return avg;
}
