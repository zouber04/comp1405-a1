#include <stdio.h>
#include <stdlib.h>


void swap(int *const first, int *const second){

    int temp;
    temp = *second;
    *second = *first;
    *first = temp;

    
    
}
int main()
{
    int one = 5;
    int two = 6;
    int *const pone = &one;
    int *const ptwo = &two;
    printf("Before swapping one = %d and two = %d\n", one, two);
    swap(pone,ptwo);
    printf("After swapping one = %d two = %d\n", one, two);
}