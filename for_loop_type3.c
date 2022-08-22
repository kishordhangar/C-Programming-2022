#include<stdio.h>
int main()
{
    printf("\nThirty for loop\n");
    int i=0;

    for( ; ; )
    {
         i++;
        if(i<=10)
        {
            
             printf("\n%d",i);
        }
        else
        {
            break;  // breake
        }
    }
        
    return 0;
}