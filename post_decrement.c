//increment and ddecrement operators in c

#include<stdio.h>
int main()
{

int a=10;

int b;
int c;
b=a--;
c=--b;



printf("\n");
printf("\nValue of integer a = %d",a);
printf("\nValue of integer b = %d",b);
printf("\nValue of integer c = %d",c);

return 0;
}