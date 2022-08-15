// 7. Mathematical operations of two number with taking input from user
#include<stdio.h>
int main()
{
    int a;
    int b;
    
printf("\nEnter first number =");
scanf("%d",&a);

printf("\nEnter Second number =");
scanf("%d",&b);

int addition =a+b;
printf("\n Additon of two numbers =%d",addition);

 int substraction = a-b;
printf("\n substraction of two numbers =%d",substraction);

int multiplication =a*b;
printf("\n multiplication of two numbers =%d",multiplication);

 int division =a/b;
printf("\n division of two numbers =%d",division);

    return 0;
}