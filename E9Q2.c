#include <stdio.h>
#include <stdlib.h>
int find_sum(int number);
int main()
{
    int end_number;
    printf("Enter a positive integer: ");
    scanf("%d",&end_number);
    printf("\nThe sum of integer from 1 to %d: %d\n",end_number,find_sum(end_number));
    return 0;
}
int find_sum(int number)//RECURSIVE FUNCTION TO PRINT SUM IN A GIVEN NUMBER
    {
        if(number!=0)
            return number+find_sum(number-1);
        else
            return number;
    }
