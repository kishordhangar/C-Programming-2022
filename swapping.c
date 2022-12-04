#include<stdio.h>
int main()
{
int var1;
int var2;
var1=var2;
var2=var1;
printf("Enter Value of var1 "); 
scanf("%d", &var1); 
printf("nEnter Value of var2 "); 
scanf("%d", &var2); 
printf("\n After swaping var1=%d var2=%d",var1,var2);
}