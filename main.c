#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void) 
{
    int i;
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE] = {1, 3, 3, 4, 5};
    int flag_same = 1;

    

    
    for (i = 0; i < SIZE; i++) 
    { 
        if (a[i] != b[i]) 
        printf("index %i different!\n", i);
    }

    return 0;
}