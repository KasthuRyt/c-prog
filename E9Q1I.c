#include <stdio.h>
#include <stdlib.h>

int main()
{
    int enter_number;
    int n=0;
    printf("enter your number:\t");
    scanf("%d",&enter_number);
    while(n<=enter_number)
    {
        printf("%d ",n);
        n++;
    }
    return 0;
}
