#include<stdio.h>
int main()//macro_substitution method

{

    float float1 = 1.2;

    float* float2 = NULL;

    //float2 = & float1;
printf("\n Address of float1 Variable = %p",float1);
printf("\n Address of float1 Variable = %p",float2);
printf("\n Stored Value in float1 variable is = %.1f",float1);
float2 = & float1;
printf("\n float1 value copy into float2 is = %.1f",float2);
printf("\n float1 value copy into *float2 is = %.1f",*float2);
*float2 = 2.3;
printf("\nmodified value of float2 is = %.1f",*float2);
printf("\nmodified value of float1 is = %.1f",float1);

    return 0;
}
/*
OUTPUT

 Address of float1 Variable = 40000000
 Address of float1 Variable = 00000000
 Stored Value in float1 variable is = 1.2
 float1 value copy into float2 is = 1.2
 float1 value copy into *float2 is = 1.2
modified value of float2 is = 2.3
modified value of float1 is = 2.3

*/