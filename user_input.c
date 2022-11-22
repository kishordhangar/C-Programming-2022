//To get user input and print out arithmetic operations 
#include<stdio.h>
int main()
{
//a,b are the identifiers of int datataypes(that means local variable declaration)
int a;
int b;
printf("Enter first num= ");
scanf("%d",&a);
printf("Enter second num= ");
scanf("%d",&b);
printf("\n Addition of two number's=%d ",a+b);
printf("\n Division of two number's=%d ",a/b);
printf("\n multiplication of two number's=%d ",a*b);
printf("\n substarction of two number's=%d ",a-b);
return 0;
}