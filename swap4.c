
//swapping program

#include<stdio.h>
int main()
{
    int num1=10, num2=20;
   
    printf("Enter Value of num1 =%d",num1);
    
    printf("\nEnter Value of num2 =%d",num2);
    int temp = num1; //a help of temp variable 
    num1 = num2;
    num2 = temp;

    printf("\n After Swapping the value of num1 = %d", num1);
    printf("\n After Swapping the value of num2 = %d", num2);
    
    return 0;
}

/*  OUTPUT

Enter Value of num1 =10
Enter Value of num2 =20
 After Swapping the value of num1 = 20
 After Swapping the value of num2 = 10
*/