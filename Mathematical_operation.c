
//Programmer: Kishor Dhangar, Date: 12/08/2022

#include<stdio.h> // Header file 

int main() // Entry point function
{

    int sumation;     //mathematical operation/varialble declaration
    int Division;
    int substraction;
    int multiplication;
    int a;
    int b;


printf("\n************** Fill out the following *************\n");


    printf("\n Enter the First Value=  ");   // this function use for print msg on consol
    scanf("%d",&a);                         // this fuction use for user input
    printf(" Enter the Second Value=  ");
    scanf("%d",&b);


    sumation= a + b;
    Division= a / b;
    substraction= a - b;
    multiplication= a * b;


printf("\n************** This is the final output using user input method *************");
    printf("\n a & b Sumation = %d",sumation);
    printf("\n a & b Division = %d",Division);
    printf("\n a & b substraction = %d",substraction);
    printf("\n a & b multiplication = %d\n\n",multiplication);



    printf("size of integer a=  %d\n",sizeof(a));
    printf("size of integer b=  %d\n\n",sizeof(b));

    printf("Address of a=  %p\n",&(a));
    printf("Address of b=  %p",&(b));


    return 0;
}