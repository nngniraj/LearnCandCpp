#include <stdio.h>
int main()
{
    int temperature[2][7];
    for (int i = 0; i < 2; ++i) {
        for(int j = 0; j < 7; ++j) {
            printf("City %d, Day %d: ", i+1, j+1);
            scanf("%d", &temperature[i][j]);
        }
    }

    printf("\nDisplaying values: \n\n");
    for (int i = 0; i < 2; ++i) {
        for(int j = 0; j < 7; ++j)
        {
            printf("City %d, Day %d = %d\n", i+1, j+1, temperature[i][j]);
        }
    }
  
    return 0;
}

