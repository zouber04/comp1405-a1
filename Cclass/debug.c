#include <stdio.h>
#include <stdlib.h>


int cumulativeSum(int limit){
    int result = 0;
    for (int i = 1; i <= limit; i++)
    {
        result += i;
        
    }
    return result;
    
}
int main()
{
    int number = 12;
    int factor = 2;

    printf("Number before multiplication %d\n", number);

    number *= factor;

    printf("Number after multiplication %d\n", number);

    int sum = cumulativeSum(number);

    printf("Cumulative sum of %d: %d\n", number, sum);

}