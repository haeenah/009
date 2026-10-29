#include <stdio.h>

#define SIZE 5

int main(void) 
{
    int i, average;
    int sum = 0;
    int grade[SIZE];

    
    sum = 0;
    for (i = 0; i < SIZE; i++) 
    {
        printf("Input student's grade : ");
        scanf("%d", &grade[i]);
        sum += grade[i];
    }

    
    average = sum / SIZE;
    printf("Average grade : %d\n", average);

    return 0;
}