//increment and ddecrement operators in c

#include<stdio.h>
int main()
{

int a=10;
int b=15;
int c=20;

int pre_increment_a;
int post_increment_a;

int pre_increment_b;
int post_increment_b;

int pre_increment_c;
int post_increment_c;

a=++a;
//pre_increment_a=a;
//a=a++;
//post_increment_a=a;

b=++b;
//pre_increment_b=b;
//b=b++;
//post_increment_b=b;

c=++c;
//a=b;
printf("\nValue of integer a = %d",a);
printf("\nValue of integer b = %d",b);
printf("\nValue of integer c = %d",c);
printf("\n");
printf("\nValue of integer pre_increment_a = %d",pre_increment_a);
printf("\nValue of integer post_increment_a = %d",post_increment_a);
printf("\n");
printf("\nValue of integer pre_increment_b = %d",pre_increment_b);
printf("\nValue of integer post_increment_b = %d",post_increment_b);
printf("\n");
//printf("\nValue of integer pre_increment_c = %d",pre_increment_c);
//printf("\nValue of integer post_increment_c = %d",post_increment_c);
//printf("\n");

return 0;
}