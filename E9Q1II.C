#include <stdio.h>
#include <stdlib.h>
void printvalue(int initial_value,int end_value);//print the integers  from 0 to user input using loops

int main()
{
    int initial_value=0;
    int end_value;
    printf("Enter a positive integer: ");
    scanf("%d",&end_value);
    printf("\ninteger from %d to%d\n",initial_value,end_value);
    printvalue(initial_value,end_value);
    return 0;
}
void printvalue(int initial_value,int end_value)
{
    if(initial_value>end_value)
        return;
    printf("%d ",initial_value);
    printvalue(initial_value+1,end_value);
}
