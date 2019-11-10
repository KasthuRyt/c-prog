#include <stdio.h>
#include <stdlib.h>
void even_odd(int start_value,int get_num);//function for print even and odd numbers seperately
int main()
{
    int get_num;
    printf("enter a positive integer: ");
    scanf("%d",&get_num);
    printf("\nAll even number from 1 to %d :\n",get_num);
    even_odd(2, get_num);//call the function even_odd for even numbers
    printf("\nAll odd number from 1 to %d :\n",get_num);
    even_odd(1, get_num);// call the function even_odd for odd numbers
    printf("\n\n");
    return 0;
}
void even_odd(int start_value,int get_num)
{
    if(start_value>get_num)
        return;
    printf(" %d ",start_value);
    even_odd(start_value+2,get_num);//calling the function even_odd itself recursively
}
