

#include<stdio.h>
int main()
{

    int i;  //local variable declaration for numbers
    int sum; //local variable declaration for addition

    for(i =1; i<=10; i++) //using for loop
         {
            sum= sum + i;  //
            printf("%d\t",i);
         }
    printf("\nAddition of All Numbers=%d\n",sum);
    return 0;
}