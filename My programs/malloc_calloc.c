#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr, *ptr2, size = 5;
    ptr = (int*) malloc(size * sizeof(int));
    int i = 0;

    for(i =0; i < size; i++)
        ptr[i] = i * i;
    for(i = 0; i < size; i++)
        printf("%d ", ptr[i]);
    printf("\n");

    ptr2 = (int*) calloc(size , sizeof(int));
    
    for(i =0; i < size; i++)
        ptr[i] = size * i;
    for(i = 0; i < size; i++)
        printf("%d ", ptr[i]);
}
