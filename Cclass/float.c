#include <stdio.h>
#include <stdlib.h>


void decompose(float num, int *whole_num, float *fract){

    *whole_num = (int) num;
    *fract = num - *whole_num;
    
    
}
int main()
{
    int whole_num;
    float fract, input;

    printf("Input a float number: ");
    scanf("%f", &input);
    decompose(input, &whole_num, &fract);

    
    printf("Integer part %.2f: %d\n", input, whole_num);
    printf("Fraction part %.2f: %.2f\n", input, fract);
}